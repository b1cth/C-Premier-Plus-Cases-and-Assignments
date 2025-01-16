//#include <iostream>
//
//int main()
//{
//    using std::cout, std::endl;
//    const char* state1 = "Florida";
//    const char* state2 = "Kansas";
//    const char* state3 = "Euphoria";
//    int len = std::strlen(state2);
//    cout << "Increasing loop index:\n";
//    int i;
//    for ( i = 0; i <=len; i++)
//    {
//        cout.write(state2, i);
//        cout << endl;
//    }
//
//    cout << "Decreasing loop index:\n";
//    for ( i = len; i >0; i--)
//    {
//        cout.write(state2, i);
//        cout << endl;
//    }
//
//    cout << "Exceeding string length:\n";
//    cout.write(state2, len + 5) << endl;
//
//    cout << (void*)state1 << endl;
//
//    long val = 56051851;
//    cout.write((char*)&val, sizeof(long)) << endl;
//
//    //flush
//    cout << "Hi, good looking." << std::flush;
//    cout << "Wait, just a moment please." << endl;
//}
