#include "ch11_a.h"

int main() {

	A obj_A;
	obj_A.SetVar(10, 20);
	obj_A.ShowVar();

	std::cout << "************************************" << std::endl;

	B obj_B;

	obj_B.SetVar(30, 40);
	obj_B.ShowVar();
	obj_B.Show();


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}