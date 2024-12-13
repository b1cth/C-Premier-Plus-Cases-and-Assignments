#include <iostream>
#include "Assignement 5.h"
int reduce(long ar[], int n);
int main()
{
    long ar[]={ 1, 151, 151, 8464, 13, 1 , 1613 };
    std::cout << "Assignemt 4: \n";
    std::cout << reduce(ar, 7) << std::endl;
    std::cout << "\nAssignemt 5: \n";
    std::cout << templateReduce<long>(ar, 7) << std::endl;
}
