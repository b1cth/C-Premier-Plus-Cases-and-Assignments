#include "list.h"
List::List() :size(0) {};
bool List::isEmpty() const {
	return size == 0;
}
bool List::isFull() const {
	return size == MAX;
}
bool List::add(const Item data) {
	if (isFull()) {
		return false;
	}
	else {
		item[size++] = data;
		return true;
	}
}
void List::visit(void (*pf)(Item&)) {
	for (int i = 0; i < size; i++)
	{
		pf(item[i]);
	}
}

void printItem(Item& x) {
	cout << x << " " << endl;
}