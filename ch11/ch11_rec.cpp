#include "ch11_rec.h"

/// ������
Rectangle::Rectangle() {
	height = 0;
	width = 0;
}

void Rectangle::SetWidth(const double width) {
	this->width = width;
	/// �º� this->width �� �������
	/// �캯 width �� �Ű�����
}

void Rectangle::SetHeight(const double height) {
	this->height = height;
	/// �º� this->height �� �������
	/// �캯 height �� �Ű�����
}

void Rectangle::CalArea() {
	area = width * height;
}

double Rectangle::GetWidth() {
	return width;
}

double Rectangle::GetHeight() {
	return height;
}

double Rectangle::GetArea() {
	return area;
}