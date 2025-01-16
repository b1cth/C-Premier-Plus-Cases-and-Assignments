//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//int main() {
//	using namespace std;
//	int casts[10]={ 1,2,3,4,5,6,7,8,9,10 };
//	vector<int> vessel(10);
//	//copy from array to vector
//	copy(casts, casts + 10, vessel.begin());
//	//create ostream
//	ostream_iterator<int, char> ost_itr(std::cout, " ");
//	copy(vessel.begin(), vessel.end(), ost_itr);
//	cout << endl;
//	copy(vessel.begin(), vessel.end(), ost_itr);
//	cout << endl;
//	//create istream
//	copy(istream_iterator<int, char> (cin), istream_iterator<int, char> (), vessel.begin());
//	copy(vessel.begin(), vessel.end(), ost_itr);
//	cout << endl;
//	
//
//	cout << "Implicit use of implicit reverse iterator.\n";
//	copy(vessel.rbegin(), vessel.rend(), ost_itr);
//	cout << endl;
//
//	cout << "Explicit use of reverse iterator.\n";
//	vector<int>::reverse_iterator r_itr;
//	for (r_itr=vessel.rbegin(); r_itr!=vessel.rend(); r_itr++)
//	{
//		cout << *r_itr << " ";
//	}
//}