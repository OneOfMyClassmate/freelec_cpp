#include <iostream>

typedef struct _DATA 
{
	char name[30];
	struct _DATA *next;
} DATA;

int main()
{
	DATA *current, a, b, c, d;
	strcpy(a.name, "äġ��");
	strcpy(b.name, "���븸");
	strcpy(c.name, "����ȣ");
	strcpy(d.name, "���¼�");

	a.next = &c;
	b.next = &d;
	c.next = &b;
	d.next = NULL;

	current = &a;

	while (current != NULL)
	{
		std::cout << current->name << std::endl;
		current = current -> next;
	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}