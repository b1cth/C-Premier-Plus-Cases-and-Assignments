#pragma once
#include <iostream>
#include <cstdlib>
template<typename T, int n>
class ArrayTP {
private:
	T ar[n];
public:
	ArrayTP();
	explicit ArrayTP(const T& v);
	virtual T& operator[](int m);
	virtual T operator[](int m) const;
};
template <typename T, int n>
ArrayTP<T, n>::ArrayTP() {
	
}
template <typename T, int n>
ArrayTP<T, n>::ArrayTP(const T& v) {
	for (int i = 0; i < n; i++)
	{
		ar[i] = v;
	}
}
template <typename T, int n>
T& ArrayTP<T, n>::operator[](int m) {
	if (m < 0 || m >= n) {
		std::cerr << "Error in wrong limit. " << m << " is out of range.\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[m];
}
template <typename T, int n>
T ArrayTP<T, n>::operator[](int m) const {
	if (m < 0 || m >= n) {
		std::cerr << "Error in wrong limit. " << m << " is out of range.\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[m];
}