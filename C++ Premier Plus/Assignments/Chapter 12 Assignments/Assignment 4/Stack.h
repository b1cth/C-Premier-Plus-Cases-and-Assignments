#pragma once
#include <iostream>
typedef unsigned long Item;
class Stack {
private:
	enum{MAX = 10};
	Item* pitems;
	int size;
	int top;
public:
	Stack(int n = MAX);
	Stack(const Stack& st);
	~Stack();
	bool isempty() const;
	bool isfull()const;
	bool push(const Item& item);
	bool pop();
	Stack& operator=(const Stack& st);
	void show() const;
	int count() const;
};