#pragma once
#include"animal.h"
#include"interface.h"
class penguin:public animal, public i_swim
{
public:
	penguin() = default;
	penguin(string n, double k, string cont) :animal(n, k, cont) {}
	void eat();
	void move();
	void swim();
};

