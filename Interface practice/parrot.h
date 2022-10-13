#pragma once
#include "animal.h"
#include "interface.h"
class parrot:public animal,public i_bird
{
public:
	parrot() = default;
	parrot(string n, double k, string cont) :animal(n, k, cont) {}
	void eat();
	void move();
	void fly();
};

