#include "ch11_geo.h"

/// ������0
GeometricFigure::GeometricFigure() {
	color = "white";
}

GeometricFigure::GeometricFigure(const std::string color)
{
	this->color = color;
}

void GeometricFigure::SetColor(const std::string color) { //���� �������� �߰��� �κ�
	this->color = color;
	/// �º� this->color �� �������
	/// �캯 color �� �Ű�����
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