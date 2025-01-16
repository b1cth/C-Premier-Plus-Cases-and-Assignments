#include <iostream>
#include "header.h" // Include the header file

template <typename Typ>
Typ maxn(const Typ* arr, int len);

//int main() {
//    int intArr[5] = { 10, 20, 30, 40, 50 };
//    double doubleArr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//
//    // Call the maxn function for intArr
//    int intMax = maxn(intArr, 5);
//    std::cout << "Max value in intArr: " << intMax << std::endl;
//
//    // Call the maxn function for doubleArr
//    double doubleMax = maxn(doubleArr, 5);
//    std::cout << "Max value in doubleArr: " << doubleMax << std::endl;
//
//    return 0;
//}

template <typename Typ>
Typ maxn(const Typ* arr, int len) {
    Typ max = arr[0];
    for (int i = 0; i < len; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}