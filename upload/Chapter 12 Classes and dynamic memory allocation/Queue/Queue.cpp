#include "Queue.h"

int Customer::ptime() {
	processTime = rand() % 3 + 1;
	return processTime;
}
int Customer::arrivalTime(int a) {
	when = a;
	return when;
}

Queue::Queue(int num) :max_queue_Size(num) {
	front = rear = nullptr;
	size = 0;
}
bool Queue::isFull() {
	return size == max_queue_Size;
}
bool Queue::isEmpty() {
	return size == 0;
}
bool Queue::enqueue(const Item& it) {
	if (isFull()) {
		return false;
	}
	Node* add = new Node;
	add->item = it;
	add->next = nullptr;
	if (size == 0) {
		front = rear = add;
	}
	else {
		rear->next = add;
		rear = add;
	}	
	size++;
	return true;
}
bool Queue::dequeue(Item& it) {
	if (isEmpty()) {
		return false;
	}
	Node* temp = front;
	it = front->item;
	front = front->next;//front指针指向下一个节点
	delete temp;//删除原本front指向的空间
	size--;
	if (size == 0) {
		rear = nullptr;
	}
	return true;
}
Queue::~Queue() {
	while ((front != nullptr) && (size != 0)) {
		Node* temp = front;
		front = front->next;
		delete temp;
		size--;
	}
	rear = nullptr; // 确保 rear 也被设置为 nullptr
	size = 0;// 确保 size 被重置为 0
}
