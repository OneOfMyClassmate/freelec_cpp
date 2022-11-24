#include <iostream>

int CheckTax(const double Income, double &Tax); //함수 선언

class SaleInf
{
public:
	SaleInf(const double Income);
	double getTax();
private:
	double Income;
	double Tax;
};



SaleInf::SaleInf(const double Income)
{
	this->Income = Income;
};


double SaleInf::getTax()
{
	CheckTax(Income, Tax); //함수 호출
	return Tax;
};

int CheckTax(const double Income, double &Tax) //함수 정의
{
	if (Income <= 0)
		return 0;
	Tax = 0.03*Income;
	return 1;
}

int main() 
{
	SaleInf s1(20.4);
	std::cout << "세금 : " << s1.getTax() << std::endl; //getTax() 멤버 내에서 CheckTax() 호출됨

	double income = 20.4, tax;
	CheckTax(income, tax);

	std::cout << "세금 : " << tax << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
