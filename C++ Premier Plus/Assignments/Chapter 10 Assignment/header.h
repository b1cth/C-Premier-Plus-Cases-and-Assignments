#pragma once
#include<iostream>
#include<string>
#include<cstring>
const int ArSize = 20;
const int len = 50;
const int QUARTERS = 4;
const int MAX_CustomerSize = 20;
using namespace std;

//Assignment 1 class
class BankAccount {
private:
	char name[ArSize];
	char account[ArSize];
	double saving;
public:
	void showInfo();
	double deposit(double amount);
	double withdraw(double amount);
	BankAccount(const char* ch, const char* ac, double m);//constructor function
	BankAccount();//default constructor function
	~BankAccount();
};

//Assignment 2 class
class Person {
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person();
	Person(const string& ln, const char* fn = "Heyyou");
	void Show() const;
	void FormalShow()const;
};

//Assignment 3 class
class golf {
private:
	char fullname[len];
	int handicap;
public:
	golf(const char* ch = "No Name", int n = 0);
	void show();
};

//Assignment 4 class
class Sales {
private:
	double sales[QUARTERS];
	double average;
	double max;
	double min;
public:
	Sales(double*, int);
	Sales();
	void show();
};

//Assignment 5 class
struct Customer {
	char fullname[35];
	double payment;
};
class Stack {
private:
	Customer stack[MAX_CustomerSize];
	int top;
public:
	Stack();
	bool isEmpty();
	bool isFull();
	bool push(const Customer& guest);
	bool pop(Customer& guest);
};
//Assignment 6 class
class Move {
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void showmove()const;
	Move add(const Move& m) const;
	void reset(double a = 0, double b = 0);

};

//Assignment 7 class
class Betelgeusean_plorg {
private:
	char name[len];
	int CI;
public:
	Betelgeusean_plorg(const char* pt = "Plorga", int index = 50);
	void modiftCI(int);
	void report() const;
};

