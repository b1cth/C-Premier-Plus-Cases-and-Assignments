#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <array>

using namespace std;
int main()
{
    double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
    vector<double> a2(4);
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;

    array<double, 4> a3 = { 3.14,2.72,1.62,1.41 };
    array<double, 4> a4;
    a4 = a3;

    cout << "a1[1]: " << a1[1] << " at "<<&a1[1]<<endl;
    cout << "a2[1]" << a2[1] << " at " << &a2[1] << endl;
    cout << "a3[1]" << a3[1] << " at " << &a3[1] << endl;
    cout << "a4[1]" << a4[1] << " at " << &a4[1] << endl;
    //Array是静态数组，所以array和标准数组都是在栈里面，内存地址想接近

    a1[-2] = 20.2;//相当于*(a1-2)=20.2，向前移动2个double长度16位
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl; 
    /*
        * a2[-2] = 5;
        a3[-2] = 2.5; //still allowed
    */
    
    //可以使用方法at()避免这种错误
    a2.at(1) = 2.4;
    /*
    中括号表示法和成员函数at()的差别在于，使用at()时，将在运行期
    间捕获非法索引，而程序默认将中断。这种额外检查的代价是运行时间
    更长
    */
    return 0;
}


