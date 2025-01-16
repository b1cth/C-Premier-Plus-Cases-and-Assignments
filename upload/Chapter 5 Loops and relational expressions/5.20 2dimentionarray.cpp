#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int Cities = 5;
const int Years = 4;
int main()
{
    const char* cities[Cities] = {
        "Gribble City",
        "New York",
        "Los Angeles",
        "Auckland",
        "Hamilton"
    };
    int temp[Cities][Years]{
        {96,100,51,56},
        {51,50,56,88},
        {60,89,50,60},
        {88,60,91,82},
        {60,55,99,33}

    };
    for (int city = 0; city < Cities; city++) {
        cout << cities[city] << " ";
        for (int year = 0; year < Years; year++) {
            cout << temp[city][year] << " ";
        }
        cout << endl;
    }
    return 0;
}


