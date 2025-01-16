#include <iostream>
#include "header.h" // Include the header file

template <typename T>
T max5(const T arr[5]) {
    T max = arr[0];
    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

//int main() {
//    int intArr[5] = { 10, 20, 30, 40, 50 };
//    double doubleArr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//
//    // Call the max5 function for intArr
//    int intMax = max5(intArr);
//    std::cout << "Max value in intArr: " << intMax << std::endl;
//
//    // Call the max5 function for doubleArr
//    double doubleMax = max5(doubleArr);
//    std::cout << "Max value in doubleArr: " << doubleMax << std::endl;
//
//    return 0;
//}