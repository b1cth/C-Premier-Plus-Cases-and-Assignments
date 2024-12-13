#include "pch.h"
#include "StringBad.h"
int StringBad::num_string = 0;
#pragma warning(disable: 4996)
void callme1(StringBad& rsb);
void callme2(StringBad sb);
int main()
{
    using std::endl;
    using std::cout; {
        cout << "Starting an inner block.\n";
        StringBad headline1("Clery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollards");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "Sports: " << sports << endl;

        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline1);
        cout << "headline1: " << headline1 << endl;

        cout << "Initializeone one object to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";
}

void callme1(StringBad& rsb) {
    using std::endl;
    using std::cout;
    cout << "String passed by reference:\n";
    cout << "      \"" << rsb << "\"\n";
}

void callme2(StringBad sb) {
    using std::cout;
    cout << "String passed by value:\n";
    cout << "      \"" << sb << "\"\n";
}