#pragma once
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
	~Inventory<T>() {
		delete[] pItems_;
		pItems_ = nullptr;
	}
	void AddItem(const T& item) {
		if (size_ < capacity_) {
			pItems_[size_] = item;
			size_++;
		}
	}
	void RemoveLastItem();
	int GetCapacity() const;
	int GetSize() const;
	void PrintAllItems() const {
		for (int i = 0; i < size_; i++) {
			pItems_[i].PrintInfo();
		}
		return;
	}
};