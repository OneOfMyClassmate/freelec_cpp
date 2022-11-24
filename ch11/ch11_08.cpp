#include "ch11_person.h"

int main() {

	std::string name, addr, tel;
	double kor, mus, art;
	std::ofstream output;
	Student stu1; // Person() 과 Student() 생성자가 자동 호출됨.

	std::cout << "이름 입력 : ";
	std::cin >> name;
	std::cout << "주소 입력 : ";
	std::cin >> addr;
	std::cout << "전화번호 입력 : ";
	std::cin >> tel;

	std::cout << "국어 점수 : ";
	std::cin >> kor;
	std::cout << "음악 점수 : ";
	std::cin >> mus;
	std::cout << "미술 점수 : ";
	std::cin >> art;

	stu1.SetVar(name, addr, tel);
	stu1.SetScore(kor, mus, art);
	stu1.CalTot();
	stu1.CalAver();

	Student stu2("채치수", "암사동", "010-2222-3333", 100, 99, 94);

	stu2.CalTot();
	stu2.CalAver();



	output.open("./output/data.txt");

	stu1.GetScore(&kor, &mus, &art);
	stu1.CalTot();
	stu1.CalAver();
	output << stu1.GetName() << " " << kor << " " << mus << " " << art << " " << stu1.GetTot() << " " << stu1.GetAver() << std::endl;

	stu2.GetScore(&kor, &mus, &art);
	stu2.CalTot();
	stu2.CalAver();
	output << stu2.GetName() << " " << kor << " " << mus << " " << art << " " << stu2.GetTot() << " " << stu2.GetAver() << std::endl;






	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}