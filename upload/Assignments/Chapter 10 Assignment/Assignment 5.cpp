#include "header.h"
Stack::Stack() :top(-1) {};
bool Stack::isEmpty() {
	return top == -1;
}
bool Stack::isFull() {
	return top == MAX_CustomerSize;
}
bool Stack::push(const Customer& guest) {
	if (isFull()) {
		cout << "The stack is full. " << endl;
		return false;
	}
	else {
		stack[++top] = guest;
		cout << "Push successfull." << endl;
		return true;
	}
}
bool Stack::pop(Customer& guest) {
	if (isEmpty()) {
		cout << "The stack is empty, no data popped." << endl;
		return false;
	}
	else {
		guest = stack[top--];
		cout << "Pop successfull." << endl;
		return true;
	}
}