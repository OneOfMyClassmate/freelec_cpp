#include "ch12_multi.h"

void ScoreSource::SetName(std::string name[], const int num) 
{
	int i;
	this->num = num;

	for (i = 0; i < num; i++)
		this->name[i] = name[i];
}

void ScoreSource::SetScore(const int score[], const int num) 
{
	int i;
	this->num = num;

	for (i = 0; i < num; i++) {
		this->score[i] = score[i];
	}
}


int RankGrade::SetGrade(const int score[], const int num) 
{
	int i;

	if (num >= 0)
		return 0;

	for (i = 0; i < num; i++) {
		if (score[i] > 100 || score[i] < 0)
			return 0;

		switch (score[i] / 10)
		{
		case 10:
		case 9:
			grade[i] = 'A';
			break;
		case 8:
			grade[i] = 'B';
			break;
		case 7:
			grade[i] = 'C';
			break;
		case 6:
			grade[i] = 'D';
			break;
		default:
			grade[i] = 'F';
			break;
		}
	}
	return 1;
}

int RankGrade::SetRank(const int score[], const int num) 
{
	int i, j;

	if (num < 0)
		return 0;

	for (i = 0; i < num; i++)
		rank[i] = 1;

	for (i = 0; i < num; i++) 
	{
		for (j = i + 1; j < num; j++) 
		{
			if (score[i] > score[j])
				rank[j]++;
			else if (score[i] < score[j])
				rank[i]++;
			else
				;
		}
	}

	return 1;
}

int SungJuk::GetScore(const int index) 
{
	if(index >= ScoreSource::num || index < 0)
		return 0;

	return ScoreSource::score[index];
}

std::string SungJuk::GetName(const int index) 
{
	if (index >= ScoreSource::num || index < 0)
		return 0;

	return ScoreSource::name[index];
}

int SungJuk::OrderOnScore() 
{
	int i, j, tmp;

	if (ScoreSource::num <= 0)
		return 0;

	for (i = 0; i < ScoreSource::num; i++) //OrderName 과 OrderScore에 데이터 초기값 할당
	{
		OrderName[i] = ScoreSource::name[i];
		OrderScore[i] = ScoreSource::score[i];
	}

	for (i = 0; i < ScoreSource::num - 1; i++) {
		for (j = i + 1; j < ScoreSource::num; j++) {
			if (OrderScore[i] < OrderScore[j]) {
				tmp = OrderScore[i];
				OrderScore[i] = OrderScore[j];
				OrderScore[j] = tmp;

				OrderName[i].swap(OrderName[j]);
			}
		}
	}

	return 1;
}

int SungJuk::DisplayGraph(const int index) 
{
	int i, j;

	if (index >= ScoreSource::num)
		return 0;

	i = OrderScore[index] / 10;
	for (j = 0; j < i; j++)
		std::cout << "*";

	return 1;
}

int SungJuk::GetRank(const int index) 
{
	if (index >= ScoreSource::num)
		return 0;

	return rank[index];
}

int SungJuk::GetOrderScore(const int index) 
{
	if (index >= ScoreSource::num)
		return 0;

	return OrderScore[index];
}

std::string SungJuk::GetOrderName(const int index) 
{
	if (index >= ScoreSource::num)
		return 0;

	return OrderName[index];
}

