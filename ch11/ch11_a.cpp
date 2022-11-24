#include "ch11_a.h"

void A::SetVar(const int proVar_A, const int priVar_A) {
	this->proVar_A = proVar_A;
	this->priVar_A = priVar_A;
};

void A::ShowVar() {
	std::cout << "proVar_A = " << proVar_A << std::endl;
	std::cout << "priVar_A = " << priVar_A << std::endl;
};

void B::Show() {
	b = 30;
	std::cout << "b = " << b << std::endl;
	proVar_A = 200;
	std::cout << "proVar_A = " << proVar_A << std::endl;
}