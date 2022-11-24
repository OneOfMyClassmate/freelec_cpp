#include "ch11_rec.h"

/// 생성자
Rectangle::Rectangle() {
	height = 0;
	width = 0;
}

void Rectangle::SetWidth(const double width) {
	this->width = width;
	/// 좌변 this->width 는 멤버변수
	/// 우변 width 는 매개변수
}

void Rectangle::SetHeight(const double height) {
	this->height = height;
	/// 좌변 this->height 는 멤버변수
	/// 우변 height 는 매개변수
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