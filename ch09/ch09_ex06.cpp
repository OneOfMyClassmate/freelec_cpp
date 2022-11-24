#include <iostream>
#include <string>

class Person
{
	friend void TEST(Person &p);
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

void TEST(Person &p)
{
	std::cout << p.name << std::endl;
	std::cout << p.age << std::endl;
	std::cout << "here" << std::endl;
	p.setAge(23);
	p.setName("이사랑");
}

int main()
{
	Person *pp1 = new Person("박진영", 25);

	std::cout << "이 름 : " << pp1->getName() << std::endl;
	std::cout << "나 이 : " << pp1->getAge() << std::endl;
	
	delete(pp1);

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
