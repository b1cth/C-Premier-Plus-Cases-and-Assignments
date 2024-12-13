#include "header.h"

int main()
{
    SALES::Sales performance;
    const double saleData[4] = { 5,586 };
    //cout << "Before calculation: \n";
    setSales(performance, saleData, 4);
    cout << "After calculation: \n";
    setSales(performance);
    showSales(performance);
}
