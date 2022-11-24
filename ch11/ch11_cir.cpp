#include "ch11_cir.h"

Circle::Circle() {
	radius = 0;
}

void Circle::SetRadius(const double radius) {
	this->radius = radius;
}

void Circle::CalArea() {
	area = radius * radius*PI;
}

double Circle::GetRedius() {
	return radius;
}

double Circle::GetArea() {
	return area;
}
