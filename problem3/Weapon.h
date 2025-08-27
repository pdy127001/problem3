#pragma once
#include"Item.h"
class Weapon:public Item{
public:
	Weapon() {};
	Weapon(string name, int price);
};

