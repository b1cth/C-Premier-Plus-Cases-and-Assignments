#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int strcount(string& str) {

    return str.length();
}
int main()
{
    string input;
    string next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (!input.empty()) {
        cout << "There're " << strcount(input) << " letters.\n";
        cout << "Enter the next line(Empty line to quit)\n";
        getline(cin, input);
    }
    cout << "Bye..." << endl;
    return 0;
}