#include "ch08_weight.h"

int main() 
{
	Weight w1;

	w1.setHeight(157);
	w1.setWeight(52.5);

	std::cout << "키 " << w1.getHeight() << "에 몸무게 " << w1.getWeight() << "는 ";

	switch (w1.getWeightStatus()) 
	{
	case 1:
		std::cout << "과체중";
		break;
	case 0:
		std::cout << "정상";
		break;	
	case -1:
		std::cout << "저체중";
		break;
	default:
		;
	}
	std::cout << " 입니다." << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}