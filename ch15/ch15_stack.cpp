#include "ch15_stack.h"

Stack::Stack() 
{
	top = -1;
}

bool Stack::isFulled() 
{
	if (top == STACK_SIZE - 1)
		return true;
	else
		return false;
};

bool Stack::isEmpty() 
{
	if (top == -1)
		return true;
	else
		return false;
};

int Stack::Push(const int element) 
{
	if (isFulled())
		return 0;
	top++;
	this->element[top] = element;
	return 1;
};

int Stack::Pop() 
{
	int element;

	if (isEmpty())
		return 0;

	element = this->element[top];
	top--;
	return element;
};
