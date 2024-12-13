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
//void rect_to_polar(const rect* pt, polar* pd);
//void showpolar(const polar* p);
//
//int main() {
//	rect rplace;
//	polar pplace;
//	cout << "please enter the x and y in rect: ";
//	while (cin >> rplace.x >> rplace.y) {
//		rect_to_polar(&rplace,&pplace);
//		showpolar(&pplace);
//		cout << "continue enter your value x and y: " << endl;
//	}
//	return 0;
//}
//
//void rect_to_polar(const rect* pt,polar* pd) {
//	
//	pd->distance = sqrt(pt->x * pt->x + pt->y * pt->y);
//	pd->angle = atan2(pt->y, pt->x);
//
//}
//
//void showpolar(const polar *p) {
//	cout << "the distance of polar is: " << p->distance << endl;
//	cout << "the angle of polar is: " << p->angle<< endl;
//}