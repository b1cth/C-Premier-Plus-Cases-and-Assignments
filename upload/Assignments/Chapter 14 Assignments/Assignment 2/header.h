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
	Pair() :a(), b(){}
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


class Wine :private PairArray {
private:
	std::string name;
	int saveYear;
public:
	Wine();
	Wine(const char* l, int y, const ArrayInt& yr, const ArrayInt& bt);
	Wine(const char* l, int y);
	void GetBottles();
	const std::string& Label() const;
	int sum();
	void show() const;
	ArrayInt& rtproductionYear() { return first(); }
	ArrayInt rtproductionYear() const { return first(); }
	ArrayInt& rtbottles() { return second(); }
	ArrayInt rtbottles() const { return second(); }
};

