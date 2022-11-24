#include "ch11_person.h"

Person::Person()
{
	name = "";
	addr = "";
	tel = "";
}

Person::Person(const std::string name, const std::string addr, const std::string tel) 
{
	this->name = name;
	this->addr = addr;
	this->tel = tel;
}

void Person::SetVar(const std::string name, const std::string addr, const std::string tel) 
{
	this->name = name;
	this->addr = addr;
	this->tel = tel;
}

std::string Person::GetName()
{
	return name;
};

std::string Person::GetAddr()
{
	return addr;
};

std::string Person::GetPhoneNum() 
{
	return tel;
};

Student::Student() 
{
	score[0] = score[1] = score[2] = 0;
	tot = 0;
	aver = 0;
};

Student::Student(const std::string name, const std::string addr, const std::string tel,
	const double kor, const double mus, const double art) 
	: Person(name, addr, tel)
{
	score[0] = kor;
	score[1] = mus;
	score[2] = art;
};

void Student::SetScore(const double kor, const double mus, const double art)
{
	score[0] = kor;
	score[1] = mus;
	score[2] = art;
};

void Student::CalTot()
{
	tot = score[0] + score[1] + score[2];
}

void Student::CalAver() {
	aver = tot / 3.0f;
}

void Student::GetScore(double *s1, double *s2, double *s3) 
{
	*s1 = score[0];
	*s2 = score[1];
	*s3 = score[2];
}

double Student::GetTot() 
{
	return tot;
}

double Student::GetAver() 
{
	return aver;
}

