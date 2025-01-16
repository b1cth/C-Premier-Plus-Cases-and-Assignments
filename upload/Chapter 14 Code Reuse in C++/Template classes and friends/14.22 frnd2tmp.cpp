//#include <iostream>
//using std::cout;
//using std::endl;
//template<typename T>
//class ManyFriend {
//private:
//    T item;
//    static int ct;
//public:
//    ManyFriend(const T& i) :item(i) { ct++; }
//    ~ManyFriend() { ct--; }
//    friend void counts();
//    friend void reports(ManyFriend<T>&);
//};
//template<typename T>
//int ManyFriend<T>::ct = 0;
//
//void counts() {
//    cout << "int count: " << ManyFriend<int>::ct << endl;
//    cout << "double count: " << ManyFriend<double>::ct << endl;
//}
//void reports(ManyFriend<int>& hs) {
//    cout << "ManyFriend<int>: " << hs.ct << endl;
//}
//void reports(ManyFriend<double>& hs) {
//    cout << "ManyFriend<double>: " << hs.ct << endl;
//}
//int main()
//{
//    cout << "No objects declared.\n";
//    counts();
//    ManyFriend<int> hfi1(10);
//    cout << "After hfi1 declared: \n";
//    counts();
//    ManyFriend<int> hfi2(20);
//    cout << "After hfi2 declared: \n";
//    counts();
//    ManyFriend<double> hfdb(10.5);
//    cout << "After hfdb declared: \n";
//    counts();
//    return 0;
//}
