#pragma once
#include "GoodBasic.h"
class Chipsi : public GoodBasic
{
private:
	string _typeOfTaste;
	int _weight;
public:
	Chipsi();
	Chipsi(int id, int price, string name, string description, int weight, string _typeOfTaste);

	int getWeight();

	void setWeight(int newWeight);

	string getType();

	void setType(string newType);

	void toString();
};
