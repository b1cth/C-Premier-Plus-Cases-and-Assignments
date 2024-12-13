#include "header.h"

int main()
{
    using std::cin, std::cout, std::endl;

    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab, 50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab, yrs);
    holding.GetBottles();
    holding.show();

    const int YRS = 3;
    int y[YRS] = { 1993, 1995, 1999 };
    int b[YRS] = { 48,60,72 };
    ArrayInt yr(y, 3);
    ArrayInt bt(b, 3);
    Wine more("Gushing Grape Red", YRS,yr,bt);
    more.show();
    cout << "Total bottles for " << more.Label()
        << ": " << more.sum() << endl;
    cout << "Bye.\n";
    return 0;
}
