#include "Stack.h"
Stack::Stack(int n) {
	size = n;
	pitems = new Item[n];
	top = 0;
}
Stack::Stack(const Stack& st) {
	size = st.size;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}
	top = st.top;
}
Stack::~Stack() {
	delete[] pitems;
	std::cout << "Done.\n";
}
bool Stack::isempty() const {
	return top == 0;
}
bool Stack::isfull()const {
	return top == size;
}
bool Stack::push(const Item& item) {
	if (isfull()) {
		return false;
	}
	pitems[top++] = item;
	return true;
}
bool Stack::pop() {
	if (isempty()) {
		return false;
	}
	std::cout << pitems[--top] << " poped.\n";
	return true;
}
Stack& Stack::operator=(const Stack& st) {
	if (this == &st) {
		return *this;
	}
	Item* new_pitem = new Item[st.size];
	for (int i = 0; i < st.size; i++)
	{
		new_pitem[i] = st.pitems[i];
	}
	delete[] pitems;
	size = st.size;
	pitems = new_pitem;
	top = st.top;
	return *this;
}

void Stack::show() const {
	if (isempty()) {
		std::cout << "The stack is empty!\n";
		return;
	}
	else
	{
		for (int i = 0; i < top; i++)
		{
			std::cout << pitems[i] << std::endl;
		}
	}
}

int Stack::count() const {
	return top;  // 返回当前栈中的元素数量
}
