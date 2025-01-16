#include "11.16 stonewt.h"
//构造函数可以使用explicit取消隐式类型转换
Stonewt::Stonewt() {
	stone = pds_left = pounds = 0;
}
Stonewt::Stonewt(double lbs) {
	stone = (int)lbs / Lbs_per_stn;
	pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs;
	pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = lbs + stn * Lbs_per_stn;
}
Stonewt::~Stonewt() {

}
void Stonewt::show_lbs() const {
	using namespace std;
	cout << pounds << " pound(s)\n";
}
void Stonewt::show_stn()const {
	using namespace std;
	cout << stone << " stone(s), " << pds_left << " pounds\n";
}