#include "StringBad.h"
#include <cstring>
#include <string>

StringBad::StringBad(const char* pt) {
	using std::cout;
	len = strlen(pt);
	str = new char[len+1];
	strcpy(str,pt);
	num_string++;
	cout << num_string << ":\"" << str << "\"object created\n";
}
StringBad::StringBad() {
	using std::cout;
	len = 4;
	str = new char[4];
	strcpy(str, "C++");
	num_string++;
	cout << num_string << ":\"" << str << "\" default object created\n";
}
StringBad::StringBad(const StringBad& sb) {
	using std::cout;
	num_string++;
	len = sb.len;
	str = new char[len + 1];
	strcpy(str, sb.str);
	cout << num_string << ":\"" << str << "\" object created\n";
}
StringBad::~StringBad() {
	using std::cout;
	cout << "\"" << str << "\" object deleted, ";
	--num_string;
	cout << num_string << " left\n";
	delete[] str;
}
StringBad& StringBad::operator=(const StringBad& b) {
	if (this == &b) {
		return *this; //如果赋值同一对象则返回当前被调用对象
	}
	delete[] str; //释放str之前占用的空间
	len = b.len;
	str = new char[len + 1];
	std::strcpy(str, b.str);
}
std::ostream& operator<<(std::ostream& os,const StringBad& st) {
	os << st.str;
	return os;
}



