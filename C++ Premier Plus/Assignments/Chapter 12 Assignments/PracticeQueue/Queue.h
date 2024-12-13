#pragma once
#include <random>
class Customer {
private:
	int arrivalTime;
	int processTime;
public:
	Customer() {
		arrivalTime = processTime = 0;
	}
	int aTime() const { return arrivalTime; }
	int pTime()const { return processTime; }
	void set(long when);
};
typedef Customer Item;

class Queue {
private:
	struct Node
	{
		Item item;
		struct Node* next;
	};
	Node* front;
	Node* rear;
	int size;
	const int maxQueueSize;
public:
	Queue(int qs = 0);
	~Queue();
	bool isEmpty();
	bool isFull();
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
	int currentSize() { return size; }
};