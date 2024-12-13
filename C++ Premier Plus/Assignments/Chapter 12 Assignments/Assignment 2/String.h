#pragma once
#include <cstring>
#include <iostream>
#include <cctype>
class String {
private:
	int len;
	char* str;
	static int num_string;
	static const int CINLIM = 80;
public:
	
	String(const String&);
	String(const char*);
	String();
	~String();
	int length() { return len; }
	static int Howmany() { return num_string; }
	char operator[](int i) { return str[i]; }
	String& operator=(const char* st);
	String& operator=(const String& st);
	String operator+(const String& st)const;
	friend String operator+(const char* ch, const String& st);
	friend bool operator<(const String& s1, const String& s2);
	friend bool operator>(const String& s1, const String& s2) { return s2 < s1; }
	friend bool operator==(const String& s1, const String& s2) { return strcmp(s1.str, s2.str) == 0; }
	friend std::ostream& operator<<(std::ostream& is, const String& st);
	friend std::istream& operator>>(std::istream& is, String& st);
	void Stringlow();
	void Stringup();
	int has(char ch);
};