#include "Inventory.h"
#include<iostream>
using namespace std;

template <typename T>
void Inventory<T>::RemoveLastItem() {
	if (size_ == 0) {
		cout << "인벤토리가 비어있습니다." << endl;
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
