#include "15.5 queuetp.h"
#include <string>
#include <iostream>
int main()
{
    using namespace std;
    QueueTP<string> cs(5);
    string temp;

    while (!cs.isfull()) {
        cout << "Enter name: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    while (!cs.isempty()) {
        cout << "Leaving queue...\n";
        cs.dequeue(temp);
        cout << temp << endl;
    }
}
