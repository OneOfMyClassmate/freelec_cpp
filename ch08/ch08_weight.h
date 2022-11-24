#ifndef _WEIGHT_H_
#define _WEIGHT_H_

#include <iostream>

class Weight 
{
public:
	void		setHeight(const double h);
	void		setWeight(const double h);
	double	getHeight();
	double	getWeight();
	int			getWeightStatus();
private:
	int			stdWeight();
	double	height, weight;
	int			WeightStatus;
};



#else
#endif