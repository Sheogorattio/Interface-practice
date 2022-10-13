#pragma once
#include"animal.h"
#include"interface.h"
class dog:public animal
{
public:
	dog() = default;
	dog(string n, double k, string cont) :animal(n, k, cont) {}
	void eat();
	void move();
};

