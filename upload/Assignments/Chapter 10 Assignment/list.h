#pragma once
#include <iostream>
using namespace std;
typedef int Item;
class List {
private:
	static const int MAX = 100;
	Item item[MAX];
	int size;
public:
	List();
	bool isEmpty() const;
	bool isFull() const;
	bool add(const Item);
	void visit(void (*pf)(Item&));
};