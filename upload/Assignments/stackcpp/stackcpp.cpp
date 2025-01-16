#include <iostream>
#include "stack.h"
#include <cctype>
using namespace std;
int main()
{
    stack st;
    unsigned long temp;
    char ch;
    cout << "Enter a to add, enter p to pop.\n" <<
        "or Enter q to quit..." << endl;
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        if (!isalpha(ch)) {
            continue;
        }
        else {
            switch (ch)
            {
            case 'a':
            case 'A':
                cout << "Enter the #PO ...";
                cin >> temp;
                if (st.isFull()) {
                    cout << "stack is full." << endl;
                }
                else {
                    st.push(temp);
                    cout << "#PO " << temp << " added." << endl;
                }
                break;
            case 'p':
            case 'P':
                if (st.isEmpty()) {
                    cout << "stack is empty." << endl;
                }
                else {
                    st.pop(temp);
                    cout << "#PO " << temp << " popped." << endl;
                }
                break;
            default:
                break;
            }
        }
    }
    cout << "bye..." << endl;
}


