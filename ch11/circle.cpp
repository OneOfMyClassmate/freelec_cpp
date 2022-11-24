#include "circle.h"

/// ������
PFigure::PFigure() {
	this->color = "white";
	/// �������
}

void PFigure::SetColor(const std::string color) {
	this->color = color;
	/// �º� this->color �� ������� 
	/// �캯 color�� �Ű�����
}

std::string PFigure::GetColor() {
	return color;
}

/// ������
Circle::Circle() {
	this->r = 0;
	this->area = 0;
	/// �������
}

void Circle::SetR(const double r) {
	this->r = r;
	/// �º� this->r �� �������
	/// �캯 r �� �Ű�����
}

double Circle::GetArea() {
	area = r * r*3.141592f;
	return area;
}