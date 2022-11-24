#include "ConTest.h"

//CON1::CON1() 
//{
//	std::cout << "*** CON1의 생성자 ***" << std::endl;
//}
//
//CON1::~CON1()
//{
//	std::cout << "*** CON1의 소멸자 ***" << std::endl;
//}
//
//CON2::CON2()
//{
//	std::cout << "*** CON2의 생성자 ***" << std::endl;
//}
//
//CON2::~CON2()
//{
//	std::cout << "*** CON2의 소멸자 ***" << std::endl;
//}


CON1::CON1(const int c)
{
	this->c = c;
	std::cout << "*** CON1의 생성자 ***" << std::endl;
	std::cout << "c = " << c << std::endl;
}

CON1::~CON1()
{
	std::cout << "*** CON1의 소멸자 ***" << std::endl;
}

CON2::CON2()
	: CON1(300)
{
	std::cout << "*** CON2의 생성자 ***" << std::endl;
	std::cout << "c = " << c << std::endl;
}

CON2::~CON2()
{
	std::cout << "*** CON2의 소멸자 ***" << std::endl;
}
