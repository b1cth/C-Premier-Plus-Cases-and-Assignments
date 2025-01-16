//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//struct antactica {
//    int years;
//};
//int main()
//{
//    antactica s01, s02, s03;
//    s01.years = 1998;
//    antactica* pa = &s02;
//    pa->years = 1999;
//    antactica trio[3];//结构体数组不是连续的
//    trio[0].years = 2003;
//    cout << trio ->years<< endl; //tryo是数组，cout中是第一个元素的地址
//    const antactica* arp[3] = { &s01,&s02,&s03 };
//    cout << arp[1]->years << endl;
//    const antactica** ppa = arp; //指向anti结构指针的指针
//    //ppa存储的arp的地址，解引用*ppa就是arp第一个元素的地址arp[0]
//    cout << (*ppa)->years << endl;
//
//    auto ppb = arp;//cout << (*ppa)->years << endl;
//    cout << (*(ppb+1))->years << endl;//取arp[1]的值
//
//    return 0;
//}
//
//
