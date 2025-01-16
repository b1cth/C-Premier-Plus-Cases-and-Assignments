#pragma once
#include <string.h>
#include <iostream>
#include <array>
#include <valarray>
template<typename t1, typename t2>
class Pair {
private:
	t1 a;
	t2 b;
public:
	t1& first();
	t2& second();
	t1 first() const { return a; }
	t2 second() const { return b; }
	Pair(const t1& m, const t2& n) :a(m), b(n) {}
	Pair() {}
};
template<typename t1, typename t2>
t1& Pair<t1, t2>::first() {
	return a;
}
template<typename t1, typename t2>
t2& Pair<t1, t2>::second() {
	return b;
}
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine {
private:
	std::string name;
	ArrayInt productionYear;
	ArrayInt bottles;
	PairArray data;
	int saveYear;
public:
	Wine();
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	const std::string& Label() const;
	int sum();
	void show() const;
};

