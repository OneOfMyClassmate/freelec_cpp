#include <iostream>

int CheckTax(const double Income, double &Tax); //함수 선언

class SaleInf
{
	friend int CheckTax2(SaleInf &Obj); //프렌드 함수 선언

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

int CheckTax2(SaleInf &Obj) 
{
	if (Obj.Income <= 0)
		return 0;
	Obj.Tax = 0.03*Obj.Income;
	return 1;
}

int main()
{
	SaleInf s1(20.4);
	CheckTax2(s1);

	std::cout << "세금 : " << s1.getTax() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
