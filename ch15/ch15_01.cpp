#include  <iostream>

template<typename T>

T  MaxValue(const T num1, const T num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
};

int main()
{
	std::cout << "정수 비교 결과 : " << MaxValue(3, 5) << std::endl;
	std::cout << "배정도 비교 결과 : " << MaxValue(9.1, 3.6) << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}