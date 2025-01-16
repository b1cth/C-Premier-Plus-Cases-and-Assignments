#include "Queue.h"

Queue::Queue(int qs) :maxQueueSize(qs) {
	front = rear = nullptr;
	size = 0;
}
Queue::~Queue() {
	
	while (front != nullptr && size != 0) {
		Node* temp = front;
		front = front->next;
		delete temp;
		size--;
	}
	rear = nullptr;
	size = 0;
}
bool Queue::isEmpty() {
	return size == 0;
}
bool Queue::isFull() {
	return size == maxQueueSize;
}
bool Queue::enqueue(const Item& item) {
	if (isFull()) {
		return false;
	}
	Node* add = new Node;
	add->item = item;
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
bool Queue::dequeue(Item& item) {
	if (isEmpty()) {
		return false;
	}
	Node* temp = front;
	item = front->item;
	front = front->next;
	delete temp;
	size--;
	if (size == 0) {
		rear = nullptr;
	}
	return true;
}

void Customer::set(long when) {
	// 使用 C++11 的随机数生成器
	std::random_device rd;   // 用于生成种子
	std::mt19937 gen(rd());  // Mersenne Twister 引擎
	std::uniform_int_distribution<> dis(1, 3);  // 生成 1 到 3 的均匀分布的随机数

	processTime = dis(gen);  // 设置处理时间
	arrivalTime = when;      // 设置到达时间
}
