#pragma once
#include"Item.h"
class Potion :public Item {
public:
	Potion() {};
	Potion(string name, int price);
};
