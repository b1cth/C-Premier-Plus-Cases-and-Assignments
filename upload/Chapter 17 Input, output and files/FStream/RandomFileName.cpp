//#include <iostream>
//#include <cstdlib>
//
//int main() {
//	using namespace std;
//	cout << "This system can generate up to " << TMP_MAX
//		<< " temporary names of up to " << L_tmpnam
//		<< " characters.\n";
//	char pszname[L_tmpnam] = { '\0' };
//	cout << "Here're 10 names: \n";
//	for (int i = 0; i < 10; i++)
//	{
//		tmpnam_s(pszname);
//		cout << i + 1 << " " << pszname << endl;
//	}
//}