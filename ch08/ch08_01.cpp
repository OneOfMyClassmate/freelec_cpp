#include "ch08_weight.h"

int main() 
{
	Weight w1;

	w1.setHeight(157);
	w1.setWeight(52.5);

	std::cout << "Ű " << w1.getHeight() << "�� ������ " << w1.getWeight() << "�� ";

	switch (w1.getWeightStatus()) 
	{
	case 1:
		std::cout << "��ü��";
		break;
	case 0:
		std::cout << "����";
		break;	
	case -1:
		std::cout << "��ü��";
		break;
	default:
		;
	}
	std::cout << " �Դϴ�." << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}