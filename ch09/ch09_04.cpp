#include <iostream>

class Sample {
public:
	void setScore(const int score);
	int getScore();
private:
	int score;			// �������
};

void Sample::setScore(const int score) {

	this->score = score; 
	// �º� this->score �� �������
	// �캯 score �� �Ű����� (const int score)
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