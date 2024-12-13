#include "stonewt.h"

int main() {
    //Assignment 5
    
    // 创建不同的 Stonewt 对象
    Stonewt weight1; // 默认构造函数
    Stonewt weight2(150.5); // 以浮点磅为单位
    Stonewt weight3(10, 5.5); // 以英石和磅为单位

    //// 输出初始状态
    //std::cout << "Default constructor: " << weight1 << std::endl;
    //std::cout << "Weight with 150.5 lbs: " << weight2 << std::endl;
    //std::cout << "Weight with 10 stones and 5.5 lbs: " << weight3 << std::endl;

    //// 修改状态并输出
    //weight1.set_status(Stonewt::Format::float_pnd);
    //std::cout << "After setting status to float_pnd: " << weight1 << std::endl;

    //weight2.set_status(Stonewt::Format::int_pnd);
    //std::cout << "After setting status to int_pnd: " << weight2 << std::endl;

    //weight3.set_status(Stonewt::Format::stn);
    //std::cout << "After setting status to stn: " << weight3 << std::endl;

    //测试加减乘
    Stonewt st1(10, 5.5);  // 10 英石 5.5 磅
    Stonewt st2(8, 10.0);  // 8 英石 10 磅
    Stonewt st3(15.25);    // 15.25 磅

    // 测试加法运算符
    Stonewt sum = st1 + st2;
    std::cout << "Sum: " << sum << std::endl;

    // 测试减法运算符
    Stonewt diff = st1 - st2;
    std::cout << "Difference: " << diff << std::endl;

    // 测试乘法运算符 (与另一个 Stonewt 对象)
    Stonewt product = st1 * st2;
    std::cout << "Product: " << product << std::endl;

    
    
    //Assignment 6
    //Stonewt arr3(11, 0.0);
    //Stonewt arr1(26);
    //Stonewt arr2(269.6);

    //Stonewt st_arr[6];
    //st_arr[0] = arr1;
    //st_arr[1] = arr2;
    //st_arr[2] = arr3;

    //for (int i = 3; i < 6; i++)
    //{
    //    std::cin >> st_arr[i];
    //}

    //std::cout << "Stonewt objects:\n";
    //for (const auto& s : st_arr) {
    //    std::cout << s << std::endl;
    //}

    //Stonewt min = st_arr[0];
    //Stonewt max = st_arr[0];
    //int count_ge_11st = 0;
    //Stonewt eleven_stones(11, 0.0); // 11 英石

    //for (const auto& s : st_arr) {
    //    if (s < min) min = s;
    //    if (s > max) max = s;
    //    if (s >= eleven_stones) ++count_ge_11st;
    //}

    //// 打印最小和最大值
    //std::cout << "Minimum weight: " << min << std::endl;
    //std::cout << "Maximum weight: " << max << std::endl;
    //std::cout << "Number of weights >= 11 stones: " << count_ge_11st << std::endl;

    return 0;
}
