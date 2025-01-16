#pragma once
#include <iostream>
#include <cstring>
class baseDMA {
private:
	char* label;
	int rating;
public:
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, baseDMA& rs);
};

class lacksDMA :public baseDMA {
private:
	enum{COL_LEN=40};
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, lacksDMA& rs);
};

class hasDMA :public baseDMA {
private:
	char* style;
public:
	hasDMA(const char* s="none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& rs);
	hasDMA& operator=(const hasDMA& rs);
	virtual ~hasDMA();
	friend std::ostream& operator<<(std::ostream& os, hasDMA& rs);
};