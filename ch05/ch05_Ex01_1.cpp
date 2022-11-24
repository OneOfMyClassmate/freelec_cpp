#include "ch05_person.h"

int main() 
{
	ITEM a;
	int temp;

	std::cout << "Month狼 林家 : " << &a.Month << std::endl;
	std::cout << "Day狼 林家 : " << &a.Day << std::endl;

	temp = (int)a.ItemName;

	std::cout << "ItemName狼 林家 : " << std::setiosflags(std::ios::uppercase) << std::setfill('0') << std::setw(8) << std::hex << temp << std::endl;
	std::cout << "Quantity狼 林家 : " << &a.Quantity << std::endl;
	std::cout << "UnitCost狼 林家 : " << &a.UnitCost << std::endl;
	std::cout << "Price狼 林家 : " << &a.Price << std::endl;




	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}