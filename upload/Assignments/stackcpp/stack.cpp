#include <iostream>
#include "stack.h"

stack::stack() {
	top = 0;
}
bool stack::isEmpty() const {
	return top == 0;
}
bool stack::isFull() const {
	return top == MAX;
}
bool stack::push(const unsigned long& ref) {
	if (top < MAX) {
		po[top++] = ref;
		return true;
	}
	else {
		return false;
	}
}
bool stack::pop(unsigned long& ref) {
	if (top > 0) {
		ref = po[--top];
		return true;
	}
	else {
		return false;
	}
		
}