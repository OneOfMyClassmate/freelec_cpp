#include "ch08_course.h"


void	Course::setCourseName(const char c[]) {
	strcpy_s(CourseName, 30, c);
	this->count = 0;
};

void	Course::setName(const char n[]) 
{
	strcpy_s(name[count], 30, n);
	this->count++;
};

int		Course::getCourseName(char c[]) 
{
	if (this->count == 0)
		return 0;

	strcpy_s(c, 30, CourseName);

	return 1;
};


int		Course::getName(char n[][30]) 
{
	int i;

	for (i = 0; i < count; i++)
		strcpy_s(n[i], 30, name[i]);

	return 0;
};

int		Course::getCount() 
{
	return count;
};