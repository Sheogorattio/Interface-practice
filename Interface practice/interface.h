#pragma once
struct i_animal {
	virtual void eat() = 0;
	virtual void move() = 0;
 };

struct i_bird {
	virtual void fly() = 0;
};

struct i_swim {
	virtual void swim() = 0;
};