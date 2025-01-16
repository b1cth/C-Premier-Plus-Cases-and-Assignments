#pragma once
#include <iostream>
#include<cmath>
namespace VECTOR {
	class Vector {
	public:
		enum Mode { RECT, POL };
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		//constructor
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		//~Vector();
		double xval()const { return x; }
		double yval()const { return y; }
		double magval()const { return mag; }
		double angval()const { return ang; }
		void reset(double n1, double n2, Mode form = RECT);
		void polar_mode();
		void rect_mode();
		//operator
		Vector operator+(const Vector& b)const;
		Vector operator-(const Vector& b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
		//friends
		friend Vector operator*(double n, const Vector& b);
		friend std::ostream& operator<<(std::ostream& os, const Vector& b);

	};
}
