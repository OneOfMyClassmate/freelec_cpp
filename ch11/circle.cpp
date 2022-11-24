#include "circle.h"

/// 생성자
PFigure::PFigure() {
	this->color = "white";
	/// 멤버변수
}

void PFigure::SetColor(const std::string color) {
	this->color = color;
	/// 좌변 this->color 는 멤버변수 
	/// 우변 color는 매개변수
}

std::string PFigure::GetColor() {
	return color;
}

/// 생성자
Circle::Circle() {
	this->r = 0;
	this->area = 0;
	/// 멤버변수
}

void Circle::SetR(const double r) {
	this->r = r;
	/// 좌변 this->r 은 멤버변수
	/// 우변 r 은 매개변수
}

double Circle::GetArea() {
	area = r * r*3.141592f;
	return area;
}