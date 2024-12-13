#include "functions.h"
void ass4() {
    const bop namelist[ass4Size]{
        {"Wimp Macho", "bbb", "c", 0},
        {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
        {"Celia Laiter", "2AAAA", "3AAAAA", 2},
        {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
        {"Pat Hand", "4CCCC", "3CCCCC", 1}
    };
    cout << "Please enter one of the following choices:\n";
    cout << "a) display by name            ";
    cout << "b) display by title    \n";
    cout << "c) display by bopname         ";
    cout << "d) display by preference        \n";
    cout << "q) quit        \n";
    char choice;
    while ((cin >> choice)&&(choice!='q')) {
        for (int i = 0; i < ass4Size; ++i) {

            switch (choice) {
            case 'a':
                cout << namelist[i].fullname << "\n";
                break;
            case 'b':
                cout << namelist[i].title << "\n";
                break;
            case 'c':
                cout << namelist[i].bopname << "\n";
                break;
            case 'd':
                cout << namelist[i].preference << "\n";
                break;

            default:
                break;
            }
        }
        
        /*switch (choice) {
        case 'a':
            for (int i = 0; i < ass4Size; i++)
            {
                cout << namelist[i].fullname << endl;
            }
            cout << "Next choice: ";
            continue;
        case 'b':
            for (int i = 0; i < ass4Size; i++)
            {
                cout << namelist[i].title << endl;
            }
            cout << "Next choice: ";
            continue;
        case 'c':
            for (int i = 0; i < ass4Size; i++)
            {
                cout << namelist[i].bopname << endl;
            }
            cout << "Next choice: ";
            continue;
        case 'd':
            for (int i = 0; i < ass4Size; i++)
            {
                cout << namelist[i].preference << endl;
            }
            cout << "Next choice: ";
            continue;
        case 'q':
            cout << "terminating...";
            break;
        default:
            cout << "Enter the right letter";
            continue;
        }*/
    }
}
