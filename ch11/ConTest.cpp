#include "ConTest.h"

//CON1::CON1() 
//{
//	std::cout << "*** CON1�� ������ ***" << std::endl;
//}
//
//CON1::~CON1()
//{
//	std::cout << "*** CON1�� �Ҹ��� ***" << std::endl;
//}
//
//CON2::CON2()
//{
//	std::cout << "*** CON2�� ������ ***" << std::endl;
//}
//
//CON2::~CON2()
//{
//	std::cout << "*** CON2�� �Ҹ��� ***" << std::endl;
//}


CON1::CON1(const int c)
{
	this->c = c;
	std::cout << "*** CON1�� ������ ***" << std::endl;
	std::cout << "c = " << c << std::endl;
}

CON1::~CON1()
{
	std::cout << "*** CON1�� �Ҹ��� ***" << std::endl;
}

CON2::CON2()
	: CON1(300)
{
	std::cout << "*** CON2�� ������ ***" << std::endl;
	std::cout << "c = " << c << std::endl;
}

CON2::~CON2()
{
	std::cout << "*** CON2�� �Ҹ��� ***" << std::endl;
}
