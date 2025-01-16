#include "stack.h"

stack::stack() {
	top = 0;
}

bool stack::isEmpty()const {
	return top == 0;
}

bool stack::isFull()const {
	return top == MAX;
}

bool stack::push(const UL& ref) {
	if (top < MAX) {
		items[top++] = ref;
		return true;
	}
	else {
		return false;
	}
}

bool stack::pop(UL& ref) {
	if (top > 0) {
		ref = items[--top] ;
		return true;
	}
	else {
		return false;
	}
}