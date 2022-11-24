#ifndef _PERSON_H_
#define _PERSON_H_


#include <iostream>
#include <string>
#include <fstream>

class Person {
public:
	Person();
	Person(const std::string name, const std::string addr, const std::string tel);
	void SetVar(const std::string name, const std::string addr, const std::string tel);
	std::string GetName();
	std::string GetAddr();
	std::string GetPhoneNum();
private:
	std::string name, addr, tel;
};

class Student : public Person {
public:
	Student();
	Student(const std::string name, const std::string addr, const std::string tel,
		const double kor, const double mus, const double art);
	void SetScore(const double kor, const double mus, const double art);
	void CalTot();
	void CalAver();
	void GetScore(double *s1, double *s2, double *s3);
	double GetTot();
	double GetAver();
private:
	double score[3], tot, aver;
	int rank;
};



#else
#endif
