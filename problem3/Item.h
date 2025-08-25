#pragma once
#include<string>
using namespace std;
class Item
{
private:
	int price_;
	string name_;
public:
	Item() { name_ = "±âº»", price_ = 0; };
	Item(string name,int price);
	~Item() {};
	void PrintInfo() const;
	string getName();
	int getPrice();
};