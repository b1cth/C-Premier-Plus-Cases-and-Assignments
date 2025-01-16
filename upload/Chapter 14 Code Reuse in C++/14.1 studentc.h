//#pragma once
//#include <iostream>
//#include <string.h>
//#include <valarray>
//typedef std::valarray<double> ArrayDB;
//class Student {
//	
//private:
//	std::string name;
//	ArrayDB scores;
//	std::ostream& arr_out(std::ostream& os) const;
//public:
//	Student() :name("Null Student"), scores() {};
//	explicit Student(const std::string& s) :name(s), scores() {}
//	explicit Student(int n) :name("Nully"), scores(n) {}
//	Student(const std::string& s, int n) :name(s), scores(n) {}
//	Student(const std::string& s, const ArrayDB& a) :name(s), scores(a) {}
//	Student(const char* ch, const double* pd, int n) :name(ch), scores(pd, n) {}
//	~Student(){}
//	double average() const;
//	const std::string& Name() const;
//	double& operator[](int n);//可修改的左值
//	double operator[](int i) const;//不可修改的右值
//
//	friend std::istream& operator>>(std::istream& is, Student& st);
//	friend std::istream& getline(std::istream& is, Student& st);
//
//	friend std::ostream& operator<<(std::ostream& os, const Student& st);
//};