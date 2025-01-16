#pragma once
#include<iostream>
class Stonewt {
private:
	enum{Lbs_per_stn=14};
	int stone;
	double	pds_left;
	double pounds;
public:
	Stonewt();
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	~Stonewt();
	void show_lbs() const;
	void show_stn()const;

	//转换函数
	/*explicit*/ operator int() const; //c++11后可以使用explicit取消隐式转换
	operator double() const;
};