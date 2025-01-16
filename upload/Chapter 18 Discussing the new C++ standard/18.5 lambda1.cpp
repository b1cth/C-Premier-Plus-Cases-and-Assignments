//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//#include <ctime>
//const long Size1 = 39L;
//const long Size2 = Size1 * 100;
//const long Size3 = Size2 * 100;
//bool f3(int x) { return x % 3 == 0; }
//bool f13(int x) { return x % 13 == 0; }
//int main() {
//	using namespace std;
//	srand(time(0));
//	vector<int> numbers(Size1);
//
//	generate(numbers.begin(), numbers.end(), rand);
//
//	//using lambda
//	int count3 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 3 == 0;});
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	int count13 = 0;
//	for_each(numbers.begin(), numbers.end(), [&count13](int x) {count13 += x % 13 == 0;});
//	cout << "Count of numbers divisible by 3: " << count13 << endl;
//
//	//using single lambda
//	count3 = count13 = 0;
//	for_each(numbers.begin(), numbers.end(), [&](int x) {count3 += x % 3 == 0; count13 += x % 13 == 0;});
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	cout << "Count of numbers divisible by 3: " << count13 << endl;
//}