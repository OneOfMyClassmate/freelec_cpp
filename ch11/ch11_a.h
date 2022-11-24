#ifndef _CH11_AH_
#define _CH11_AH_

#include <iostream>

class A {
public:
	void SetVar(const int oriVar_A, const int priVar_A);
	void ShowVar();
protected:
	int proVar_A;
private:
	int priVar_A;
};

class B : public A 
{
public :
	void Show();
	int b;
};


#else
#endif

