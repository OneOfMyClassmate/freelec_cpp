#include <iostream>

class Sample {
public:
	void setScore(const int score);
	int getScore();
private:
	int score;			// 멤버변수
};

void Sample::setScore(const int score) {

	this->score = score; 
	// 좌변 this->score 는 멤버변수
	// 우변 score 는 매개변수 (const int score)
};

int Sample::getScore() {
	return score;
}

int main() {
	Sample Sam;
	Sam.setScore(100);

	std::cout << "Sam.getScore() : " << Sam.getScore() << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}