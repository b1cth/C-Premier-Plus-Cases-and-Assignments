#pragma once
#include <list>
#include <algorithm>
template<typename T>
int templateReduce(T ar[], int n) {
	std::list<T> li(ar, ar + n);
	//sort first, then unique
	li.sort();
	li.unique();
	li.erase(std::unique(li.begin(),li.end()), li.end());
	return li.size();
}
