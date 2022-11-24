#include <iostream>
#include <exception>


int main(int argc, char** argv) {


	try 
	{
		for (int i = 1; i <= 100; i++) 
		{
			new int[70000000];
			std::cout << i << "번째 배열이 생성되었습니다." << std::endl;
		}
	}
	catch (std::bad_alloc &e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}
