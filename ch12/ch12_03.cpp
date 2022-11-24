#include <iostream>

class A
{
public:
	virtual std::string ClassMessage() // 가상 함수
	{ 
		return "class A";
	}

};

class B : public A
{
public:
	std::string ClassMessage() // 함수 오버라이딩
	{
		return "class B"; 
	}
};

void TestFunction1(A x)
{
	std::cout << x.ClassMessage().data() << std::endl;
}

void TestFunction2(A *x)
{
	std::cout << x->ClassMessage().data() << std::endl;
}


int main() {
	A a;
	B b;

	//TestFunction1(a);
	//TestFunction1(b);

	TestFunction2(&a);
	TestFunction2(&b);

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}