//#include <iostream>
//using namespace std;
//
//int main() {
//    int data[3][4] = { { 1, 2, 3, 4 }, { 9, 8, 7, 6 }, { 2, 4, 6, 8 } };
//    int(*ar2)[4] = data;
//
//    for (int r = 0; r < 3; r++) {
//        cout << "ar2 + " << r << ": " << ar2 + r << endl;
//        cout << "*(ar2 + " << r << "): " << *(ar2 + r) << endl;
//
//        // 逐个打印第 r 行的元素
//        for (int c = 0; c < 4; c++) {
//            cout << "*(ar2 + " << r << ") + " << c << ": " << *(ar2 + r) + c << endl;
//            cout << "*(*(ar2 + " << r << ") + " << c << "): " << *(*(ar2 + r) + c) << endl;
//        }
//        cout << "--------------------" << endl;
//    }
//
//    return 0;
//}
