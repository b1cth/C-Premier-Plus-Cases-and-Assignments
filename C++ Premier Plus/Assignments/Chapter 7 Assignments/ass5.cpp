#include "functions.h";
int recursion(int n) {
	int result=1;
	if (n == 0) {
		return 1;
	}
	else {
		return n * recursion(n - 1);
	}
}

//main
//int main()
//{
//    int n;
//    while (true)
//    {
//        cout << "Enter the number you want to factorial: \n";
//        cin >> n;
//        cout << recursion(n);
//        cout << endl;
//    }
//
//}