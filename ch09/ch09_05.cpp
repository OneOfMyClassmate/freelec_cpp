#include <iostream>

int CheckTax(const double Income, double &Tax); //�Լ� ����

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
	CheckTax(Income, Tax); //�Լ� ȣ��
	return Tax;
};

int CheckTax(const double Income, double &Tax) //�Լ� ����
{
	if (Income <= 0)
		return 0;
	Tax = 0.03*Income;
	return 1;
}

int main() 
{
	SaleInf s1(20.4);
	std::cout << "���� : " << s1.getTax() << std::endl; //getTax() ��� ������ CheckTax() ȣ���

	double income = 20.4, tax;
	CheckTax(income, tax);

	std::cout << "���� : " << tax << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
