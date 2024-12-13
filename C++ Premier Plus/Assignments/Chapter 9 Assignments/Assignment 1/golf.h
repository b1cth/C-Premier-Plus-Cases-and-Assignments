#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;
const int Len = 40;
const int num = 3;
struct  golf
{
	char fullname[Len];
	int handicap;
};

void setgolf(golf& g, const char* name, int hc);
int setgolf(golf& g);
void handicap(golf& g, int hc);
void showgolf(const golf& g);