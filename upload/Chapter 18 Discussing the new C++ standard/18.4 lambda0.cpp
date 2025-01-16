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
//	//use function pointers
//	cout << "Sample size: " << Size1 << endl;
//	int count3 = count_if(numbers.begin(), numbers.end(), f3);
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	int count13 = count_if(numbers.begin(), numbers.end(), f13);
//	cout << "Count of numbers divisible by 13: " << count3 << endl;
//
//	//increase number of numbers
//	numbers.resize(Size2);
//	generate(numbers.begin(), numbers.end(), rand);
//	cout << "Sample size: " << Size2 << endl;
//
//	//using a functor
//	class f_mod {
//	private:
//		int x;
//	public:
//		f_mod(int n):x(n){}
//		bool operator()(int n) { return n % x == 0; }
//	};
//	count3 = count_if(numbers.begin(), numbers.end(), f_mod(3));
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	count13 = count_if(numbers.begin(), numbers.end(), f_mod(13));
//	cout << "Count of numbers divisible by 3: " << count13 << endl;
//
//	////increase number of numbers again
//	numbers.resize(Size3);
//	generate(numbers.begin(), numbers.end(), rand);
//	cout << "Sample size: " << Size3 << endl;
//
//	//using lambda
//	count3 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 3 == 0;});
//	cout << "Count of numbers divisible by 3: " << count3 << endl;
//	count13 = count_if(numbers.begin(), numbers.end(), [](int x) {return x % 13 == 0;});
//	cout << "Count of numbers divisible by 3: " << count13 << endl;
//
//}