#include "Item.h"
#include<string>
#include<iostream>
using namespace std;
Item::Item(string name,int price) {
	name_ = name;
	price_ = price;
};
string Item::getName() {
	return name_;
}
int Item::getPrice() {
	return price_;
}
void Item::PrintInfo() const {
	cout << "[�̸�: " << name_ << ", ����: " << price_ << "G]" << endl;
}