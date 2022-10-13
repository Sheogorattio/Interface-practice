#include <iostream>
#include"cat.h"
#include"dog.h"
#include"dolphin.h"
#include"parrot.h"
#include"pinguin.h"
using namespace std;

int main() {
	i_animal* ptr = nullptr;
	parrot obj("parrot", 2.0, "africa");
	ptr = &obj;
	ptr->eat();
	ptr->move();
	ptr = nullptr;
	//parrot* p = dynamic_cast<parrot*>(ptr);
	i_bird* fly = &obj;
	fly->fly();
}