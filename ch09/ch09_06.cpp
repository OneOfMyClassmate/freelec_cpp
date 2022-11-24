#include <iostream>

int CheckTax(const double Income, double &Tax); //�Լ� ����

class SaleInf
{
	friend int CheckTax2(SaleInf &Obj); //������ �Լ� ����

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

	std::cout << "���� : " << s1.getTax() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
