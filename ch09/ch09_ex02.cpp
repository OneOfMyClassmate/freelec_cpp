#include <iostream>
#include <string>

class Person
{
public:
	Person();
	Person(const std::string name, const int age);
	std::string getName();
	int getAge();
	void setName(const std::string name);
	void setAge(const int age);
private:
	std::string name;
	int age;
};

Person::Person()
{
	name = "김수한무";
	age = 120;
};

Person::Person(const std::string name, const int age) 
{
	this->name = name;
	this->age = age;
};

std::string Person::getName()
{
	return this->name;
};

int Person::getAge()
{
	return this->age;
};

void Person::setName(const std::string name)
{
	this->name = name;
};

void Person::setAge(const int age)
{
	this->age = age;
};

int main()
{
	Person p1, p2;

	p1.setName("채치수");
	p1.setAge(19);

	std::cout << "이 름 : " << p1.getName() << std::endl;
	std::cout << "나 이 : " << p1.getAge() << std::endl;

	std::cout << "이 름 : " << p2.getName() << std::endl;
	std::cout << "나 이 : " << p2.getAge() << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
