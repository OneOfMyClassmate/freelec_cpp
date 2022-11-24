
#include "ch08_weight.h"

void		Weight::setHeight(const double h)
{
	this->height = h;
};

void		Weight::setWeight(const double h)
{
	this->weight = h;
};

double	Weight::getHeight() 
{
	return height;
};

double	Weight::getWeight() 
{
	return weight;
};

int			Weight::stdWeight()
{
	double sw = (height - 110)*0.9;

	if (sw + 0.5 < weight)
		WeightStatus = 1;
	else if (sw - 0.5 > weight)
		WeightStatus = -1;
	else
		WeightStatus = 0;

	return 1;
};

int			Weight::getWeightStatus() 
{
	stdWeight();
	return WeightStatus;
};

