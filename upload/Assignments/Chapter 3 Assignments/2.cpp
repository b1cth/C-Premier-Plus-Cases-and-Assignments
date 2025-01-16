//#include <iostream>
//#include <cmath>
//using namespace std;
//const double inch2meter = 0.0254;
//const int inch = 12;
//const float kg2pound = 2.2;
//float meter(int x, int y);
//float weight(int y);
//int main() {
//	int foot, inch, pound;
//	float height, kg;
//	float BMI(float height, float kg);
//	cout << "please enter your height:  foot." << endl;;
//	cin >> foot;
//	cout << "please enter your inch: " << endl;
//	cin >> inch;
//	height = meter(foot, inch);
//	cout << "your height in meter is: " << height << endl;
//	cout << "please enter your weight in pound: ";
//	cin >> pound;
//	kg=weight(pound);
//	cout << "your weight in kg is: " << kg << " kg." << endl;
//	cout <<"your BMI is: " << BMI(height, kg) << endl;
//	return 0;
//}
//
//float meter(int x,int y) {
//	float m;
//	m = (x * inch + y) * inch2meter;
//	return m;
//}
//
//float weight(int y) {
//
//	return y / kg2pound;
//}
//
//float BMI(float height, float kg) {
//	float bmi= kg/pow(height,2) ;
//	return bmi;
//}