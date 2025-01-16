#pragma once
#include <iostream>
#include <cstring>
class ABC {
public:
	virtual ~ABC() = default; // 确保有一个虚析构函数
	virtual void display() const = 0; // 纯虚函数用于显示
};

class baseDMA :public ABC{
private:
	char* label;
	int rating;
public:
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, baseDMA& rs);
	virtual void display() const;
};

class lacksDMA :public baseDMA {
private:
	enum{COL_LEN=40};
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, lacksDMA& rs);
	virtual void display() const;
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
	virtual void display() const;
};