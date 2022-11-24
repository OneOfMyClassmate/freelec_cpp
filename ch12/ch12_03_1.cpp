#include <iostream>

class A
{
public:
	virtual std::string ClassMessage() // 가상 함수
	{
		return "class A";
	}

};

class B : public A // 클래스 상속
{
public:
	std::string ClassMessage() 
	{
		return "class B";
	}
};

class C : public B // 클래스 상속
{
public:
	std::string ClassMessage()
	{
		return "class C";
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
	C c;

	//TestFunction1(a);
	//TestFunction1(b);

	TestFunction2(&a);
	TestFunction2(&b);
	TestFunction2(&c);

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}