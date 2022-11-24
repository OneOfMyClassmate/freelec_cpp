#include <iostream>

class CopyObj 
{
public:
	CopyObj(const double height, const double weight);
	void ShowVar();
private:
	double height;
	double weight;
};

CopyObj::CopyObj(const double height, const double weight) 
{
	this->height = height;
	this->weight = weight;
};

void CopyObj::ShowVar() 
{
	std::cout << "Å° : " << height << std::endl;
	std::cout << "¸ö¹«°Ô : " << weight << std::endl;
};

int main()
{
	CopyObj p1(181.5, 79.3);
	p1.ShowVar();

	std::cout << "**********************************************" << std::endl;

	CopyObj p2(p1);
	p2.ShowVar();

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
