#pragma once
template <typename Type>
class Stack {
private:
	enum { MAX = 10 };
	int top;
	int stacksize;
	Type* items;
public:
	Stack();
	explicit Stack(int stacksize);
	Stack(const Stack& st);
	~Stack() { delete[] items; }
	bool isFull();
	bool isEmpty();
	bool push(const Type& i);
	bool pop(Type& i);
	Stack<Type>& operator=(const Stack<Type>& st);
};

template <typename Type>
Stack<Type>::Stack() {
	top = 0;
}
template <typename Type>
Stack<Type>::Stack(int stacksize) { 
	items = new Type[stacksize]; 
	top = 0;
}
template <typename Type>
Stack<Type>::Stack(const Stack& st) {
	stacksize = st.stacksize;
	items = new Type[stacksize];
	top = st.top;
	for (int i = 0; i < stacksize; i++)
	{
		items[i] = st.items[i];
	}
}
template <typename Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type>& st) {
	if (this == &st) {
		return *this;
	}
	delete[] items;
	stacksize = st.stacksize;
	items = new Type[stacksize];
	top = st.top;
	for (int i = 0; i < stacksize; i++)
	{
		items[i] = st.items[i];
	}
	return *this;
}
template <typename Type>
bool Stack<Type>::isFull() {
	return top == MAX;
}
template <typename Type>
bool Stack<Type>::isEmpty() {
	return top == 0;
}
template <typename Type>
bool Stack<Type>::push(const Type& i) {
	if (isFull()) {
		return false;
	}
	items[top++] = i;
	return true;
}
template <typename Type>
bool Stack<Type>::pop(Type& i) {
	if (isEmpty()) {
		return false;
	}
	i = items[--top];
	return true;
}
