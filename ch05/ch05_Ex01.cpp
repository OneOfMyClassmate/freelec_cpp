#include <iostream>

int main()
{
	typedef struct
	{
		int Month;
		int Day;
		char ItemName[50];
		int Quantity;
		int UnitCost;
		int Price;
	} ITEM;

	typedef struct
	{
		int ReceiptNum;
		char Name1[50];
		char BusinessRegNum[50];
		char FirmName[50];
		char Name2[50];
		char FirmAddresss[50];
		char TypeOfFirm[50];
		char LinesOfBusiness[50];
		char Data[20];
		int Amount;
		char Handler[50];
		ITEM itemp[10];
	} RECEIPT;


	std::cout << sizeof(ITEM) << std::endl;
	std::cout << sizeof(RECEIPT) << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}