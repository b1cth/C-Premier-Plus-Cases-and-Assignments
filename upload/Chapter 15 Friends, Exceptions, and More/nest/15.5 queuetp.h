#pragma once
template<typename Item>
class QueueTP {
private:
	class Node {
	public:
		Item item;
		Node* next;
		Node(const Item& i):item(i),next(nullptr){}
	};
	Node* front;
	Node* rear;
	int size; 
	const int qsize;
public:
	QueueTP(int i):size(0),qsize(i),front(nullptr),rear(nullptr){}
	bool isfull() const { return size == qsize; }
	bool isempty() const { return size == 0; }
	bool enqueue(const Item& i);
	bool dequeue(Item& i);
	~QueueTP();
};

template<typename Item>
bool QueueTP<Item>::enqueue(const Item& i) {
	if (isfull()) {
		return false;
	}
	Node* add = new Node(i);
	if (size == 0) {
		front = rear = add;
	}
	else {
		rear->next = add;
	}
	rear = add;
	size++;
	return true;
}
template<typename Item>
bool QueueTP<Item>::dequeue(Item& i) {
	if (isempty()) {
		return false;
	}
	i = front->item;
	Node* temp;
	temp = front->next;
	delete front;
	front = temp;
	size--;
	return true;
}
template<typename Item>
QueueTP<Item>::~QueueTP() {
	Node* temp;
	while (front != nullptr) {
		temp = front->next;
		delete front;
		front = temp;
	}
}