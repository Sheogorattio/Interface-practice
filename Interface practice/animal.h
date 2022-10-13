#pragma once
#include <iostream>
#include"interface.h"
using namespace std;
class animal :public i_animal
{

	string name;
	double kg;
	string continent;
public:
	animal() = default;
	animal(string n, double k, string cont);
};

