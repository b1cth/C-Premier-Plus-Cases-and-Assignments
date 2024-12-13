#include "String.h"
String::String(const String& st) {
	len = st.len;
	str = new char[len + 1];
	strcpy(str,st.str);
	num_string++;
}
String::String(const char* st) {
	len=strlen(st);
	str = new char[len+1];
	strcpy(str, st);
	num_string++;
}
String::String() {
	len = 0; // 设置长度为0
	str = new char[1]; // 分配一个字符的空间
	str[0] = '\0'; // 设置为空字符串
	num_string++;
}
String::~String() {
	num_string--;
	delete[] str;
}
bool operator<(const String& s1, const String& s2) {
	return std::strcmp(s1.str, s2.str) < 0;
}

String& String::operator=(const String& st) {
	if (*this == st) {
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	num_string++;
	return *this;
}
String& String::operator=(const char* st) {
	delete[] str;
	len = strlen(st);
	str = new char[len + 1];
	strcpy(str, st);
	num_string++;
	return *this;
}
std::istream& operator>>(std::istream& is, String& st) {
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	st = temp;
	if (is) {
		while (is && is.get() != '\n') {
			continue;
		}
	}
	return is;
}
std::ostream& operator<<(std::ostream& os, const String& st) {
	os << st.str << std::endl;
	return os;
}

String String::operator+(const String& st) const{
	char* new_char = new char[len + st.len + 1];
	strcpy_s(new_char, len + st.len + 1, st.str);
	String new_String(new_char);
	delete[] new_char;
	return new_String;
}
String operator+(const char* ch, const String& st) {
	char* new_char = new char[strlen(ch) + st.len + 1];
	strcpy_s(new_char, strlen(ch) + st.len + 1, st.str);
	String new_String(new_char);
	delete[] new_char;
	return new_String;
}

void String::Stringlow() {
	for (int i = 0; i < len + 1; i++)
	{
		str[i] = tolower(str[i]);
	}
}

void String::Stringup() {
	for (int i = 0; i < len+1; i++)
	{
		str[i] = toupper(str[i]);
	}
}


int String::has(char ch) {
	int count = 0;
	for (int i = 0; i < length()+1; i++)
	{
		if (str[i] == ch) {
			count++;
		}
	}
	return count;
}

