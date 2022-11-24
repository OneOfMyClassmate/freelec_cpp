#pragma once
#ifndef _STACKTEMPLATE_H_
#define _STACKTEMPLATE_H_

#include <iostream>
#include <string>
#include "ch15_stack.h"

template<typename T>
class StackTemplate
{
public:
	StackTemplate();
	bool isFulled();
	bool isEmpty();
	int Push(const T element);
	T Pop();
private:
	T element[STACK_SIZE];
	int top;
};


template<typename T>
StackTemplate<T>::StackTemplate() 
{
	top = -1;
}

template <typename T>
bool StackTemplate<T>::isFulled() 
{
	if (top == STACK_SIZE - 1)
		return true;
	else
		return false;
}

template <typename T>
bool StackTemplate<T>::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

template <typename T>
int StackTemplate<T>::Push(const T element)
{
	if (isFulled())
		return 0;

	top++;
	this->element[top] = element;
	return 1;
}

template <typename T>
T StackTemplate<T>::Pop() 
{
	T element;

	if (isEmpty())
		return 0;

	element = this->element[top];
	top--;
	return element;
}

#else
#endif