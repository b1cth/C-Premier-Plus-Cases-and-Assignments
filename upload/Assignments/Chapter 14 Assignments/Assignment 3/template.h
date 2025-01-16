#pragma once
#include "Worker.h"
template<typename T>
class QueueTP {
private:
	struct Node {
		T item;
		Node* next;
		Node(const T& i) :item(i), next(nullptr) {}
	};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
public:
	QueueTP(int n = 10) :front(nullptr), rear(nullptr), items(0), qsize(n) {}
	~QueueTP();
	bool isEmpty() const;
	bool isFull() const;
	bool enQueue(const T& n);
	bool deQueue(T& item);
};
template<typename T>
bool QueueTP<T>::isEmpty() const {
	return items == 0;
}
template<typename T>
bool QueueTP<T>::isFull() const {
	return items == qsize;
}
template<typename T>
bool QueueTP<T>::enQueue(const T& item) {
	if (isFull()) {
		std::cout << "Queue is full.\n";
		return false;
	}
	Node* add = new Node(item);
	items++;
	if (front == nullptr) {
		front = rear = add;
	}
	else {
		rear->next = add;
		rear = add;
	}
	return true;
}
template<typename T>
bool QueueTP<T>::deQueue(T& i) {
	if (isEmpty()) {
		std::cout << "The queue is empty.\n";
		return false;
	}
	i = front->item;
	items--;
	Node* temp = front;
	front = temp->next;
	delete temp;
	if (front == nullptr) {
		rear = nullptr;
	}
	return true;
}
template<typename T>
QueueTP<T>::~QueueTP() {
	Node* temp;
	while (front != nullptr) {
		temp = front;
		front = front->next;
		delete temp;
	}
}