#ifndef _SUNG_H_
#define _SUNG_H_

#include <iostream>

template<typename T> //일반화 유형 선언
class SUNG 
{
public:
	SUNG(const T k, const T e, const T m);
	T GetSum();
	double GetAver();
private:
	T k, e, m, sum;
	double aver;
};

template<typename T>
SUNG<T>::SUNG(const T k, const T e, const T m) 
{
	this->k = k;
	this->e = e;
	this->m = m;
}

template<typename T>
T SUNG<T>::GetSum() 
{
	sum = k + e + m;
	return sum;
}

template<typename T>
double SUNG<T>::GetAver() 
{
	aver = sum / (double)3;
	return aver;
}




#else
#endif
