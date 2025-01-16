#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    using namespace std;
    cout << "Enter letters (quit to quit) : ";
    string letters;
    while (cin >> letters && letters != "quit") {
        cout << "\n" << letters << endl;
        sort(letters.begin(), letters.end());
        while (next_permutation(letters.begin(), letters.end())) {
            cout << letters << endl;
        }
    }
    cout << "Done.\n";
}
