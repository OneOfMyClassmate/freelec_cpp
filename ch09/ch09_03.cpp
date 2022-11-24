#include <iostream>

class Student 
{
public:
	Student(const int s1 = 0, const int s2 = 0, const int s3 = 0);
	~Student();
	void Sum();
	int getSum();
private:
	int score1, score2, score3, sum;
};


Student::Student(const int s1, const int s2, const int s3) 
	: sum(0)
{
	score1 = s1;
	score2 = s2;
	score3 = s3;
};

Student::~Student()
{
	std::cout << "�Ҹ���" << std::endl;
};

void Student::Sum()
{
	sum = score1 + score2 + score3;
};

int Student::getSum()
{
	return sum;
};



int main()
{
	Student Obj(100, 89, 96);
	Obj.Sum();
	std::cout << "���� : " << Obj.getSum() << std::endl;

	Student *p_Obj = new Student(98, 76, 45);

	p_Obj->Sum();
	std::cout << "���� : " << p_Obj->getSum() << std::endl;

	delete(p_Obj);

	p_Obj = &Obj;
	std::cout << "���� : " << p_Obj->getSum() << std::endl;

	Student &r_Obj = Obj;
	std::cout << "���� : " << r_Obj.getSum() << std::endl;

	std::cout << "Obj�� ũ�� : " << sizeof(Obj) << std::endl;
	std::cout << "p_Obj�� ũ�� : " << sizeof(p_Obj) << std::endl;
	std::cout << "r_Obj�� ũ�� : " << sizeof(r_Obj) << std::endl;






	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}