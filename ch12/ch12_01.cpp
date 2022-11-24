#include <iostream>

class TwoNumber 
{
public:
	TwoNumber();
	int AddNumber(const int ia, const int ib);
	double AddNumber(const double da, const double db);
private:
	int i_sum;
	double d_sum;
};

TwoNumber::TwoNumber() 
{
	i_sum = 0;
	d_sum = 0;
}

int TwoNumber::AddNumber(const int ia, const int ib) 
{
	std::cout << "integer" << std::endl;
	i_sum = ia + ib;
	return i_sum;
}

double TwoNumber::AddNumber(const double da, const double db) 
{
	std::cout << "double" << std::endl;
	d_sum = da + db;
	return d_sum;
}

int main() 
{
	TwoNumber obj1;

	std::cout << "3 + 4 = " << obj1.AddNumber(3, 4) << std::endl;
	std::cout << "3.5 + 4.6 = " << obj1.AddNumber(3.5, 4.6) << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}