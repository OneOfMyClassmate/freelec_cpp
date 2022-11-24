//#ifndef _CONTEST_H_
//#define _CONTEST_H_
//
//#include <iostream>
//
//class CON1
//{
//public:
//	CON1();
//	~CON1();
//};
//
//class CON2 : public CON1
//{
//public:
//	CON2();
//	~CON2();
//};
//
//
//#else
//#endif



#ifndef _CONTEST_H_
#define _CONTEST_H_

#include <iostream>

class CON1
{
public:
	CON1(const int c);
	~CON1();
protected:
	int c;  // 멤버 변수 추가
};

class CON2 : public CON1
{
public:
	CON2();
	~CON2();
};


#else
#endif