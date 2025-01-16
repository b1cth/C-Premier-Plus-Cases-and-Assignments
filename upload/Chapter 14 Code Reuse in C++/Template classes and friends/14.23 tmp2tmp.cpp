//#include <iostream>
//using std::cout;
//using std::endl;
//template<typename T> void counts();
//template<typename T> void reports(T&);
//template<typename T>
//class ManyFriend {
//private:
//    T item;
//    static int ct;
//public:
//    ManyFriend(const T& i) :item(i) { ct++; }
//    ~ManyFriend() { ct--; }
//    friend void counts<T>();
//    friend void reports<>(ManyFriend<T>&);
//};
//template<typename T>
//int ManyFriend<T>::ct = 0;
//template<typename T>
//void counts() {
//    cout << "template size: " << sizeof(ManyFriend<T>) << endl;
//    cout << "template counts: " << ManyFriend<T>::ct << endl;
//}
//template<typename T>
//void reports(T& hs) {
//    cout << hs.item << endl;
//}
//
//int main()
//{
//    counts<int>();
//    ManyFriend<int> hfi1(10);
//    ManyFriend<int> hfi2(20);
//    ManyFriend<double> hfdb(10.5);
//    reports(hfi1);
//    reports(hfi2);
//    reports(hfdb);
//    cout << "counts<int>() output: ";
//    counts<int>();
//    cout << "counts<double>() output: ";
//    counts<double>();
//    return 0;
//}
