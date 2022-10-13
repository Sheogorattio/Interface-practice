#pragma once
#include"animal.h"
#include"interface.h"
class cat :public animal
{
public:
	cat() = default;
	cat(string n, double k, string cont) :animal(n, k, cont){}
	void eat();
	void move();
};

