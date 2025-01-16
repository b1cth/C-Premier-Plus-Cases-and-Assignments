#pragma once
#include<iostream>
class Stonewt {
public:
	enum Format { stn, int_pnd, float_pnd }; // 状态枚举
private:
	enum { Lbs_per_stn = 14 };
	Format status;
	int stone;
	double	pds_left;
	double pounds;
public:
	//构造函数
	Stonewt();
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	~Stonewt();
	//设置状态
	void set_status(Format newStat);
	//运算
	Stonewt operator+(const Stonewt& st) const;
	Stonewt operator-(const Stonewt& st) const;
	Stonewt operator*(const Stonewt& st) const;
	//输入输出
	friend std::ostream& operator<<(std::ostream& os, Stonewt st);
	friend std::istream& operator>>(std::istream& is, Stonewt& st);
	//关系判断
	bool operator==(const Stonewt& s) const;
	bool operator!=(const Stonewt& s) const;
	bool operator<(const Stonewt& s) const;
	bool operator<=(const Stonewt& s) const;
	bool operator>(const Stonewt& s) const;
	bool operator>=(const Stonewt& s) const;
};