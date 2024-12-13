#pragma once
#include <random>
#include <cstdlib>
class Customer {
private:
	int processTime;
	int when;
public:
	int ptime();
	int arrivalTime(int a);
};
typedef Customer Item;
class Queue {
private:
	struct Node {
		Item item;
		struct Node* next;
	};
	Node* front;
	Node* rear;
	const int max_queue_Size;
	int size;
public:
	Queue(int num=10);
	~Queue();
	bool isFull();
	bool isEmpty();
	bool enqueue(const Item& it);
	bool dequeue(Item& it);
};
