//#include <iostream>
//#include <set>
//#include <algorithm>
//#include <iterator>
//#include <vector>
//#include <map>
//void show(std::string x) { std::cout << x << " "; }
//std::string& ToLower(std::string& x) {
//	std::transform(x.begin(), x.end(), x.begin(), std::tolower);
//	return x;
//}
//int main() {
//	using namespace std;
//	string temp;
//	vector<string> words;
//	cout << "Enter words: (quit to quit)\n";
//	while (cin >> temp && temp != "quit") {
//		words.push_back(temp);
//	}
//	cout << "Vector: \n";
//	for_each(words.begin(), words.end(), show);
//	cout << endl;
//
//	set<string> wordset;
//	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
//	cout << "set: \n";
//	for_each(wordset.begin(), wordset.end(), show);
//	cout << endl;
//
//	map<string, int> wordmap;
//	set<string>::iterator it;
//	/*for (it = wordset.begin(); it != wordset.end(); it++) {
//		wordmap.insert(pair<string, int>(*it, count(words.begin(), words.end(), *it)));
//	}*/
//
//	cout << endl;
//	cout << "words frequency.\n";
//	for (it = wordset.begin(); it != wordset.end(); it++) {
//		wordmap[*it] = count(words.begin(), words.end(), *it);
//	}
//	for (it = wordset.begin(); it != wordset.end(); it++) {
//		cout << *it << ": " << wordmap[*it] << endl;
//	}
//	cout << endl;
//}