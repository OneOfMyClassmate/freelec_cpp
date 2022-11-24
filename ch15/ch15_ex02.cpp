#include  "ch15_stack.h"
#include  "ch15_stackTemplate.h"

int main()
{
	Stack s;

	s.Push(100);
	s.Push(200);
	s.Push(300);
	
	for (; !s.isEmpty(); )
		std::cout << s.Pop() << "  ";
	std::cout << std::endl;

	StackTemplate<std::string> strS;

	strS.Push("äġ��");
	strS.Push("����ȣ");
	strS.Push("���븸");

	for (; !strS.isEmpty(); )
		std::cout << strS.Pop() << "  ";
	std::cout << std::endl;

	StackTemplate<double> douS;;

	douS.Push(13.4);
	douS.Push(54.2);
	douS.Push(87.8);

	for (; !douS.isEmpty(); )
		std::cout << douS.Pop() << "  ";
	std::cout << std::endl;



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}