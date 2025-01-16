//#include "14.13 stacktp.h"
//#include <iostream>
//using namespace std;
//int main()
//{
//    Stack<string> st;
//    char ch;
//    std::string po;
//    cout << "Please enter 'A' to add a purchase order.\n"
//        << "'P' to process a PO, or 'Q' to quit.\n";
//    while (cin >> ch && toupper(ch) != 'Q') {
//        while (cin.get() != '\n') {
//            continue;
//        }
//        if (!isalpha(ch)) {
//            cout << '\a';
//            continue;
//        }
//        switch (ch) {
//        case 'A':
//        case'a':
//            if (st.isFull()) {
//                cout << "Stack is full\n";
//                break;
//            }
//            else {
//                cout << "Please enter the purchase order number: \n";
//                cin >> po;
//                st.push(po);
//                break;
//            }
//            
//        case 'P':
//        case'p':
//            if (st.isEmpty()) {
//                cout << "The stack is empty.\n";
//                break;
//            }
//            else {
//                st.pop(po);
//                cout << "PO: " << po << " poped.\n";
//                break;
//            }
//        default:
//            break;
//        }
//        cout << "Please enter 'A' to add a purchase order.\n"
//            << "'P' to process a PO, or 'Q' to quit.\n";
//    }
//    cout << "Bye...\n";
//}
