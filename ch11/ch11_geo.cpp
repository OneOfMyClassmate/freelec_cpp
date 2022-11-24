#include "ch11_geo.h"

/// 생성자0
GeometricFigure::GeometricFigure() {
	color = "white";
}

GeometricFigure::GeometricFigure(const std::string color)
{
	this->color = color;
}

void GeometricFigure::SetColor(const std::string color) { //연습 문제에서 추가된 부분
	this->color = color;
	/// 좌변 this->color 는 멤버변수
	/// 우변 color 는 매개변수
};

bool GeometricFigure::IsPaint() {
	if (color == "white")
		return false;
	else
		return true;
}

std::string GeometricFigure::GetColor() {
	return color;
}