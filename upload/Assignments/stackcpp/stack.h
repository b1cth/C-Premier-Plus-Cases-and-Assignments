#pragma once

class stack {
private:
	unsigned long top;
	enum{MAX=12};
	char po[MAX];

public:
	stack();
	bool isEmpty() const;
	bool isFull() const;
	bool push(const unsigned long &ref);
	bool pop(unsigned long &ref);
};