#pragma once
#include <iostream>
#include <string.h>
#include <valarray>
typedef std::valarray<double> ArrayDB;
class Student :private ArrayDB,private std::string{

private:
	std::ostream& arr_out(std::ostream& os) const;
public:
	Student() :std::string("Null Student"), ArrayDB() {};
	explicit Student(const std::string& s) :std::string(s), ArrayDB() {}
	explicit Student(int n) :std::string("Nully"), ArrayDB(n) {}
	Student(const std::string& s, int n) :std::string(s), ArrayDB(n) {}
	Student(const std::string& s, const ArrayDB& a) :std::string(s), ArrayDB(a) {}
	Student(const char* ch, const double* pd, int n) :std::string(ch), ArrayDB(pd, n) {}
	~Student() {}
	double average() const;
	const std::string& Name() const;
	double& operator[](int n);//可修改的左值
	double operator[](int i) const;//不可修改的右值

	//friend method
	friend std::istream& operator>>(std::istream& is, Student& st);
	friend std::istream& getline(std::istream& is, Student& st);
	friend std::ostream& operator<<(std::ostream& os, const Student& st);

	//using method
	using ArrayDB::size;
	using ArrayDB::max;
	using ArrayDB::min;
};