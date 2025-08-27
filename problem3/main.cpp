#include<iostream>
#include"Item.h"
#include"Weapon.h"
#include"Potion.h"
#include"Inventory.h"
using namespace std;
void printWeapon(const Inventory<Weapon>* weaponInven) {
	cout << "���� ���" << endl;
	weaponInven->PrintAllItems();
	cout << "_____________________________________________" << endl;
}
void printPotion(const Inventory<Potion>* potionInven) {
	cout << "���� ���" << endl;
	potionInven->PrintAllItems();
	cout << "_____________________________________________" << endl;
}
int main() {
	Inventory<Potion>* potionInven = new Inventory<Potion>(2);
	Potion* p[3];
	p[0] = new Potion("�Ķ�����", 1000);
	p[1] = new Potion("��������", 500);
	p[2] = new Potion("��������", 1500);
	Inventory<Weapon>* weaponInven = new Inventory<Weapon>(2);
	Weapon* w[3];
	w[0] = new Weapon("�Ѽհ�", 1000);
	w[1] = new Weapon("�μհ�", 1000);
	w[2] = new Weapon("Ȱ", 1000);
	cout << "���� ����" << endl;
	weaponInven->RemoveLastItem();
	cout << "���� �κ��丮 �뷮: " << weaponInven->GetCapacity() << ", ũ��: " << weaponInven->GetSize() << endl;
	cout << "���� ���� �߰�" << endl;
	potionInven->AddItem(*p[0]);
	weaponInven->AddItem(*w[0]);
	potionInven->AddItem(*p[1]);
	weaponInven->AddItem(*w[1]);
	potionInven->AddItem(*p[2]);
	weaponInven->AddItem(*w[2]);
	printPotion(potionInven);
	printWeapon(weaponInven);
	cout << "���� �κ��丮 �뷮: " << weaponInven->GetCapacity() << ", ũ��: " << weaponInven->GetSize() << endl;
	cout << "���� ����" << endl;
	weaponInven->RemoveLastItem();
	printWeapon(weaponInven);
	cout << "�κ��丮 2 ���� ������" << endl;
	Inventory<Weapon>* weaponInven2 = new Inventory<Weapon>(*weaponInven);
	printWeapon(weaponInven2);
	cout << "�κ��丮 1 ���� ����" << endl;
	weaponInven->RemoveLastItem();
	cout << "�κ��丮 1 ���� ���" << endl;
	printWeapon(weaponInven);
	cout << "�κ��丮 2 ���� ���" << endl;
	printWeapon(weaponInven2);//2�� �������� �������� �������簡 �ߵǾ����� ����
	cout << "���� ��庰�� ������" << endl;
	printPotion(potionInven);
	cout << "���� ��庰�� ������" << endl;
	potionInven->SortItems();
	printPotion(potionInven);
	delete weaponInven;
	delete potionInven;
	delete weaponInven2;
	for (int i = 0; i < 3; i++) delete p[i];
	for (int i = 0; i < 3; i++) delete w[i];


	return 0;
}