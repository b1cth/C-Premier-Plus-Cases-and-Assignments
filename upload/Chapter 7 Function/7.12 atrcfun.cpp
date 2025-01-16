//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct rect {
//	double x;
//	double y;
//};
//struct polar {
//	double distance;
//	double angle;
//};
//
//polar rect_to_polar(rect xypos);
//void showpolar(polar p);
//
//int main() {
//	rect rplace;
//	polar pplace;
//	cout << "please enter the x and y in rect: ";
//	while (cin >> rplace.x >> rplace.y) {
//		pplace = rect_to_polar(rplace);
//		showpolar(pplace);
//		cout << "continue enter your value x and y: " << endl;
//	}
//	return 0;
//}
//
//polar rect_to_polar(rect xypos) {
//	polar answer;
//	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//
//
//	return answer;
//}
//
//void showpolar(polar p) {
//	cout << "the distance of polar is: " << p.distance << endl;
//	cout << "the angle of polar is: " << p.angle << endl;
//}