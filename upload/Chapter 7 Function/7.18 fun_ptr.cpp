//#include <iostream>
//using namespace std;
//double betsy(int lns);
//double pam(int lns);
//void estimate(int lns, double (*pt)(int));
//int main() {
//	cout << "how many lines of code do you have?" << endl;
//	int lines;
//	cin >> lines;
//	estimate(lines, betsy);
//	estimate(lines, pam);
//
//	return 0;
//}
//
//double betsy(int lns) {
//	return 0.05 * lns;
//}
//
//double pam(int lns) {
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lns, double (*pt)(int)) {
//	cout << "your code took " << pt(lns) << " hours" << endl;
//}