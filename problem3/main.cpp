#include<iostream>
#include"Item.h"
#include"Weapon.h"
#include"Potion.h"
#include"Inventory.h"
using namespace std;
int main() {
	Inventory<Item>* Inven = new Inventory<Item>(10);
	Item* p[3];
	p[0] = new Potion("빨간포션", 500);
	p[1] = new Potion("파란포션", 1000);
	p[2] = new Potion("보라포션", 1500);
	Item* w[3];
	w[0] = new Weapon("한손검", 1000);
	w[1] = new Weapon("두손검", 1000);
	w[2] = new Weapon("활", 1000);
	Inven->PrintAllItems();
	delete Inven;
	return 0;
}