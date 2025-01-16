//#include <iostream>
//#include<initializer_list>
//#include<algorithm>
//template<typename T>
//T average_list(std::initializer_list<T> t) {
//    T avg;
//    T total = 0;
//    std::for_each(t.begin(), t.end(), [&total](T x) {total += x;});
//    if (t.size() != 0) {
//        avg = total / t.size();
//        return avg;
//    }
//    return T();
//}
//int main()
//{
//    using namespace std;
//    auto q = average_list({ 15.4,10.7,9.0 });
//    cout << q << endl;
//    //list of int reduced from list contents
//    auto ad = average_list<double>({ 'A',70,65.33 });
//    cout << ad << endl;
//}
//
//
