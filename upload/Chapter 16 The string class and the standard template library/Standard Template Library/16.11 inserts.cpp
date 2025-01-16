//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//void output(const std::string& s) { std::cout << s << " "; }
//int main() {
//	using namespace std;
//	string s1[4] = {"fine","fish","fast","fate"};
//	string s2[2]{ "busy","bats" };
//	string s3[2]{ "silly","singers" };
//
//	vector<string> words(4);
//	cout << "Copy to vector\n";
//	copy(s1, s1 + 4, words.begin());
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//	
//	//back insert
//	back_insert_iterator<vector<string>> bi_itr(words);
//	copy(s2, s2 + 2, bi_itr);
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	//inser 
//	copy(s3, s3 + 2, insert_iterator<vector<string>>(words, words.begin()));
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//}