﻿#include "stack.h" #include <iostream> template<template<typename T> typename Thing> class Crab{ private: 	Thing<int> a; 	Thing<double> b;  public: 	Crab() {}; 	bool push(int m, double n) { 		return (a.push(m) && b.push(n)); 	} 	bool pop(int& m, double& n) { 		return (a.pop(m) && b.pop(n)); 	} }; int main() {	 	using std::endl, std::cout, std::cin; 	Crab<Stack> nebula; 	int ni; 	double nb; 	cout << "Enter the int double pairs,such as 4 3.5 (0 0 to end):\n"; 	while (cin >> ni >> nb && ni > 0 && nb > 0) { 		if (!nebula.push(ni, nb)) { 			break; 		} 	} 	while (nebula.pop(ni, nb)) { 		cout << ni << " , " << nb << endl; 	} 	return 0; } 