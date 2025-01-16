#include <iostream>
#include "header.h"
#include "list.h"
void printItem(Item& );
int main()
{   
    //Assignment 1 main
    /*BankAccount acc{
        "ZhangSan",
        "1511966",
        155000
    };
    acc.showInfo();
    acc.deposit(62600);
    acc.showInfo();
    acc.withdraw(6000);
    acc.showInfo();*/

    //Assignment 2 main
    Person pp1("Walter");
    pp1.Show();
    pp1.FormalShow();
    Person pp2("Jesse", "Pinkman");
    pp1.Show();
    Person random;
    random.Show();

    ////Assignment 3 main
    //golf go;
    //go.show();
    
    
    //Assignment 4 main
    /*double arr[4]{ 1515.0, 1515.0, 8484.0, 48545.0 };
    Sales sell(arr,4);
    sell.show();*/

    //Assignment 5 main
    /*Customer c1 = { "Alice Smith", 100.50 };
    Customer c2 = { "Bob Jones", 200.75 };
    Customer temp;

    Stack data;
    cout << "is full? " << data.isFull() << endl;
    cout << "is empty? " << data.isEmpty() << endl;
    data.push(c1);
    data.push(c2);
    data.pop(temp);
    cout << temp.fullname << endl;
    cout << temp.payment << endl;
    data.pop(temp);
    cout << temp.fullname << endl;
    cout << temp.payment << endl;
    data.pop(temp);*/

    //Assignment 6 main 
    //int main()
    //{
    //	Move a, b;
    //	Move c{ 20,60 };
    //	a.showmove();
    //	b = a.add(c);
    //	b.showmove();
    //	return 0;
    //}

    //Assignment 7 main 
    //int main()
    //{
    //    Betelgeusean_plorg plorg;
    //    plorg.report();
    //    plorg.modiftCI(60);
    //    plorg.report();
    //    Betelgeusean_plorg x{ "dasf",888 };
    //    x.report();
    //}

    //Assignment 8 main
    /*List temp;
    cout << "is full? " << temp.isFull() << endl;
    cout << "is empty? " << temp.isEmpty() << endl;
    temp.add(60);
    temp.add(6515);
    temp.visit(printItem);*/

    return 0;
}

