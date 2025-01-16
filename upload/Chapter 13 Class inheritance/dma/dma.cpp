#include "13.14 dma.h";
baseDMA::baseDMA(const char* l, int r) {
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}
baseDMA::baseDMA(const baseDMA& rs) {
	int len = strlen(rs.label) + 1;
	label = new char[len];
	strcpy_s(label, len, rs.label);
	rating = rs.rating;
}
baseDMA::~baseDMA() {
	delete[] label;
	std::cout << "Deleted baseDMA" << std::endl;
}
baseDMA& baseDMA::operator=(const baseDMA& rs) {
	if (this == &rs) {
		return *this;
	}
	delete[] label;
	int len = strlen(rs.label) + 1;
	label = new char[len];
	strcpy_s(label, len, rs.label);
	rating = rs.rating;
	return *this;
}
std::ostream& operator<<(std::ostream& os, baseDMA& rs) {
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) :baseDMA(l, r) {
	strcpy_s(color, COL_LEN - 1, c);
	color[COL_LEN-1] = '\0';
}
lacksDMA::lacksDMA(const char* c, const baseDMA& rs):baseDMA(rs) {
	strcpy_s(color, COL_LEN - 1, c);
	color[COL_LEN-1] = '\0';
}
std::ostream& operator<<(std::ostream& os, lacksDMA& rs) {
	os << (baseDMA&)rs << std::endl;
	os << "color: " << rs.color << std::endl;
	return os;
}

hasDMA::hasDMA(const char* s, const char* l, int r):baseDMA(l,r) {
	int len = strlen(s) + 1;
	style = new char[len];
	strcpy_s(style, len, s);
}
hasDMA::hasDMA(const char* s, const baseDMA& rs) :baseDMA(rs) {
	int len = strlen(s) + 1;
	style = new char[len];
	strcpy_s(style, len, s);
}
hasDMA::hasDMA(const hasDMA& rs):baseDMA(rs) {
	int len = strlen(rs.style) + 1;
	style = new char[len];
	strcpy_s(style, len, rs.style);
}
hasDMA& hasDMA::operator=(const hasDMA& rs) {
	if (this == &rs) {
		return *this;
	}
	delete[] style;
	baseDMA::operator=(rs);
	int len = strlen(rs.style) + 1;
	style = new char[len];
	strcpy_s(style, len, rs.style);
	return *this;
}
hasDMA::~hasDMA() {
	delete[] style;
	std::cout << "Deleted hasDMA" << std::endl;
}
std::ostream& operator<<(std::ostream& os, hasDMA& rs) {
	os << (baseDMA&)rs << std::endl;
	os << "style: " << rs.style << std::endl;
	return os;
}