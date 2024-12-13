#pragma once
#include<iostream>
class StringBad {
private:
	char* str;
	int len;
	static int num_string;
public:
	StringBad(const char*);
	StringBad();
	StringBad(const StringBad& sb);
	~StringBad();
	StringBad& operator=(const StringBad& b);
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};
