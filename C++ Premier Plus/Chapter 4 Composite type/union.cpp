//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//union once4all {
//    int int_val;
//    long long_val;
//    double double_val;
//}; //共用体，只保存一个数据，内存为最大的一个数据类型
//
//struct widget {
//    char brand[20];
//    int type;
//    union id {             //可以嵌套
//        long id_num;
//        char id_cahr[20];
//    }id_val;//实例
//};
//
//int main()
//{
//    once4all pail;
//    pail.int_val = 15;
//    cout << pail.int_val << endl;
//    pail.double_val = 1.38;
//    cout << pail.double_val;
//
//    
//
//    widget prize;
//    prize.type = 20;
//    if (prize.type == 1) {
//        cin >> prize.id_val.id_num;
//    }
//    else {
//        cin >> prize.id_val.id_cahr;      //如果是匿名共用体就直接prize.id_val
//    };
//
//    return 0;
//}
//
//
