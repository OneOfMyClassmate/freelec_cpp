#include <iostream>

class A
{
public:
	std::string ClassMessage() {
		return "class A";
	}

};

class B : public A
{
public:
	std::string ClassMessage() {
		return "class B";
	}
};

void TestFunction1(A x) 
{
	std::cout << x.ClassMessage().data() << std::endl;
}

int main() {
	A a;
	B b;

	TestFunction1(a);
	TestFunction1(b);

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}