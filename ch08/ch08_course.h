#ifndef _COURSE_H_
#define _COURSE_H_

#include <iostream>

class Course 
{
public:
	void	setCourseName(const char c[]);
	void	setName(const char n[]);
	int		getCourseName(char c[]);
	int		getName(char n[][30]);
	int		getCount();
private:
	char	CourseName[30];
	char	name[10][30];
	int		count;
};


#else
#endif