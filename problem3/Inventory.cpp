#include "Inventory.h"
#include<iostream>
using namespace std;

template <typename T>
int Inventory<T>::GetCapacity() const {
	return capacity_;
};
template <typename T>
int Inventory<T>::GetSize() const {
	return size_;
};
