#include "ch11_str.h"

int main() {

	StringCharArray one;
	char t_str[50];

	one.assign("sample");
	one.toCharArray(t_str);

	std::cout << "one : "<<one << std::endl;
	std::cout <<"t_str : "<< t_str << std::endl;


	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}