#include "Item.h"
#include<string>
#include<iostream>
using namespace std;
Item::Item(string name,int price) {
	name_ = name;
	price_ = price;
};
void Item::PrintInfo() const {
	cout << "[�̸�: " << name_ << ", ����: " << price_ << "G]" << endl;
}