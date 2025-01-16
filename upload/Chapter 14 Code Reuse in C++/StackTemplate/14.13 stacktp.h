//#pragma once
//template <typename Type>
//class Stack {
//private:
//	enum{MAX=10};
//	int top;
//	Type items[MAX];
//public:
//	Stack();
//	bool isFull();
//	bool isEmpty();
//	bool push(const Type& i);
//	bool pop(Type& i);
//};
//
//template <typename Type>
//Stack<Type>::Stack() {
//	top = 0;
//}
//template <typename Type>
//bool Stack<Type>::isFull() {
//	return top == MAX;
//}
//template <typename Type>
//bool Stack<Type>::isEmpty() {
//	return top == 0;
//}
//template <typename Type>
//bool Stack<Type>::push(const Type& i) {
//	if (isFull()) {
//		return false;
//	}
//	items[top++] = i;
//	return true;
//}
//template <typename Type>
//bool Stack<Type>::pop(Type& i) {
//	if (isEmpty()) {
//		return false;
//	}
//	i = items[--top];
//	return true;
//}