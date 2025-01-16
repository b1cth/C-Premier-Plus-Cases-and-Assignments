#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int maxNumber_scores = 10;
const int array_size = 10;

struct expense_s {
	double expense[4];
};

struct box {
	char marker[40];
	float height;
	float width;
	float length;
	float volume=0;
};

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

double calculate(double a, double b, double pt(double a, double b));
double add(double a, double b);
double multiply(double a, double b);

