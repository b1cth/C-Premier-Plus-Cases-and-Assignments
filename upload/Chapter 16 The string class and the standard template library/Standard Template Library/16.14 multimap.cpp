//#include <algorithm>
//#include <map>
//#include <iostream>
//#include <iterator>
//#include <string>
//typedef int keytype;
//typedef std::pair<keytype, std::string> Pair;
//typedef std::multimap<keytype, std::string> MapCode;
//int main() {
//	using namespace std;
//	MapCode codes;
//	codes.insert(Pair(415, "San Francisco"));
//	codes.insert(Pair(510, "Oakland"));
//	codes.insert(Pair(718, "Brooklyn"));
//	codes.insert(Pair(718, "Staten Island"));
//	codes.insert(Pair(415, "San Rafael"));
//	codes.insert(Pair(510, "Berkeley"));//以键值排序
//
//	cout << "Number of cities with area code 415: " << codes.count(415) << endl;
//	cout << "Number of cities with area code 718: " << codes.count(718) << endl;
//	cout << "Number of cities with area code 510: " << codes.count(510) << endl;
//
//	cout << "Area Code\tCity\n";
//	MapCode::iterator it;
//	for ( it = codes.begin(); it!=codes.end(); it++)
//	{
//		cout << it->first << "\t\t" << (*it).second << endl;
//	}
//
//	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
//	cout << "cities with area code 718:\n";
//	for (it = range.first;it != range.second;it++) {
//		cout << it->first << "\t\t" << (*it).second << endl;
//	}
//}