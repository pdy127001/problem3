#include<iostream>
#include"Item.h"
#include"Weapon.h"
#include"Potion.h"
#include"Inventory.h"
using namespace std;
void printWeapon(const Inventory<Weapon>* weaponInven) {
	cout << "무기 출력" << endl;
	weaponInven->PrintAllItems();
	cout << "_____________________________________________" << endl;
}
void printPotion(const Inventory<Potion>* potionInven) {
	cout << "포션 출력" << endl;
	potionInven->PrintAllItems();
	cout << "_____________________________________________" << endl;
}
int main() {
	Inventory<Potion>* potionInven = new Inventory<Potion>(2);
	Potion* p[3];
	p[0] = new Potion("파란포션", 1000);
	p[1] = new Potion("빨간포션", 500);
	p[2] = new Potion("보라포션", 1500);
	Inventory<Weapon>* weaponInven = new Inventory<Weapon>(2);
	Weapon* w[3];
	w[0] = new Weapon("한손검", 1000);
	w[1] = new Weapon("두손검", 1000);
	w[2] = new Weapon("활", 1000);
	cout << "무기 삭제" << endl;
	weaponInven->RemoveLastItem();
	cout << "무기 인벤토리 용량: " << weaponInven->GetCapacity() << ", 크기: " << weaponInven->GetSize() << endl;
	cout << "무기 포션 추가" << endl;
	potionInven->AddItem(*p[0]);
	weaponInven->AddItem(*w[0]);
	potionInven->AddItem(*p[1]);
	weaponInven->AddItem(*w[1]);
	potionInven->AddItem(*p[2]);
	weaponInven->AddItem(*w[2]);
	printPotion(potionInven);
	printWeapon(weaponInven);
	cout << "무기 인벤토리 용량: " << weaponInven->GetCapacity() << ", 크기: " << weaponInven->GetSize() << endl;
	cout << "무기 삭제" << endl;
	weaponInven->RemoveLastItem();
	printWeapon(weaponInven);
	cout << "인벤토리 2 복사 생성자" << endl;
	Inventory<Weapon>* weaponInven2 = new Inventory<Weapon>(*weaponInven);
	printWeapon(weaponInven2);
	cout << "인벤토리 1 무기 삭제" << endl;
	weaponInven->RemoveLastItem();
	cout << "인벤토리 1 무기 출력" << endl;
	printWeapon(weaponInven);
	cout << "인벤토리 2 무기 출력" << endl;
	printWeapon(weaponInven2);//2는 삭제되지 않음으로 깊은복사가 잘되었음을 증명
	cout << "포션 골드별로 정렬전" << endl;
	printPotion(potionInven);
	cout << "포션 골드별로 정렬후" << endl;
	potionInven->SortItems();
	printPotion(potionInven);
	delete weaponInven;
	delete potionInven;
	delete weaponInven2;
	for (int i = 0; i < 3; i++) delete p[i];
	for (int i = 0; i < 3; i++) delete w[i];


	return 0;
}