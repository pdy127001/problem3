#pragma once
#include<iostream>
#include"Item.h"
#include"Weapon.h"
#include"Potion.h"
using namespace std;
template <typename T>
class Inventory
{
private:
	T* pItems_;
	int capacity_;
	int size_ = 0;

public:
	Inventory<T>(int capacity = 10) {
		if (capacity <= 0) {
			capacity = 1;
		}
		capacity_ = capacity;
		pItems_ = new T[capacity_];
	}
	Inventory(const Inventory<T>& other) {
		capacity_ = other.capacity_;
		size_ = other.size_;
		pItems_ = new T[capacity_];
		for (int i = 0; i < size_; ++i) {
			pItems_[i] = other.pItems_[i];
		}
		cout << "인벤토리 복사 완료" << endl;
	}
	~Inventory<T>() {
		delete[] pItems_;
		pItems_ = nullptr;
	}
	void AddItem(const T& item) {
		if (size_ < capacity_) {
			pItems_[size_] = item;
			size_++;
		}
		else {
			Resize(capacity_);
			T* newItems = new T[capacity_];
			for (int i = 0; i < size_; i++) {
				newItems[i] = pItems_[i];
			}
			newItems[size_] = item;
			size_++;
			delete[] pItems_;
			pItems_ = newItems;
		}

	}
	void Resize(int newCapacity) {
		capacity_ =newCapacity*2;
	}
	void RemoveLastItem() {
		if (size_ == 0) {
			cout << "인벤토리가 비어있습니다." << endl;
			return;
		}
		size_--;
		return;
	}
	int GetCapacity() const {
		return capacity_;
	};
	int GetSize() const {
		return size_;
	};
	void PrintAllItems() const {
		for (int i = 0; i < size_; i++) {
			pItems_[i].PrintInfo();
		}
		return;
	}
    void Assign(const Inventory<T>& other) {
		if (this == &other) {
			return;
		}
		delete[] pItems_;
		capacity_ = other.capacity_;
		size_ = other.size_;
		pItems_ = new T[capacity_];
		for (int i = 0; i < size_; ++i) {
			pItems_[i] = other.pItems_[i];
		}
		cout << "인벤토리 대입 완료" << endl;
	}
	void SortItems() {
		for (int i = 0; i < size_; i++) {
			for(int j=0;j<size_-1-i;j++){
				if(pItems_[j].getPrice()> pItems_[j+1].getPrice()){
					T temp=pItems_[j];
					pItems_[j]=pItems_[j+1];
					pItems_[j+1]=temp;
				}
			}
		}
	}
};