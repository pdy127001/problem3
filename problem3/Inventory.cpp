#include "Inventory.h"
#include<iostream>
using namespace std;

template <typename T>
void Inventory<T>::RemoveLastItem() {
	if (size_ == 0) {
		cout << "�κ��丮�� ����ֽ��ϴ�." << endl;
		return;
	}
	size_--;
	return;
};
template <typename T>
int Inventory<T>::GetCapacity() const {
	return capacity_;
};
template <typename T>
int Inventory<T>::GetSize() const {
	return size_;
};
