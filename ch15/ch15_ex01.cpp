#include  "ch15_stack.h"

int main()
{
	Stack s;
	int i;

	std::cout << "�Է� �ڷ� : ";
	for (i = 10; i <= 50; i = i + 10) 
	{
		std::cout << i << "  ";
		s.Push(i);
	}

	std::cout << std::endl << "��� �ڷ� : ";

	for (i = 0; !s.isEmpty(); i++)
		std::cout << s.Pop() << "  ";

	std::cout << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}