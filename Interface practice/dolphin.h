#pragma once
#include"animal.h"
#include"interface.h"
class dolphin :public animal, public i_swim
{
public:
	dolphin() = default;
	dolphin(string n, double k, string cont) :animal(n, k, cont) {}
	void eat();
	void move();
	void swim();
};

