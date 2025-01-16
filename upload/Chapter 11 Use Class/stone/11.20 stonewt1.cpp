#include "11.16 stonewt.h"

Stonewt::operator int() const {
	return int(pounds + 0.5);
}
Stonewt::operator double() const {
	return pounds;
}