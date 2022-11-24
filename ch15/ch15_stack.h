#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
#define STACK_SIZE 100

class Stack 
{
public:
	Stack();
	bool isFulled();
	bool isEmpty();
	int Push(const int element);
	int Pop();
private:
	int element[STACK_SIZE];
	int top;
};




#else
#endif