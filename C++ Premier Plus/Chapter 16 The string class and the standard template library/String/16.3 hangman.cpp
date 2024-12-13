//#include <iostream>
//#include <random>
//#include <cstdlib>
//#include <string>
//#include <cctype>
//
//using std::string;
//const int num = 26;
//const string wordlist[num]{
//	"apiary","beetle","cereal","danger","ensign","florid","garage",
//	"health","insult","jackal","keeper","loaner","manage","nonce",
//	"onset","plaid","quilt","remote","stolid","train","useful",
//	"valid","whence","xenon","yearn","zippy"
//};
//
//int main() {
//	using std::cin, std::cout, std::endl;
//	srand(time(0));
//	cout << "Welcome, do you want to guess the word?<y,n>.\n";
//	char choice;
//	cin >> choice;
//	choice = tolower(choice);
//	while (choice == 'y') {
//		string target = wordlist[rand() % 26];
//		int length = target.size();
//		int guess = 6;
//		string badguess;
//		string attempt(6, '-');
//		char letter;
//		cout << "You have " << guess << " chances to guess.\n";
//		while (guess>0||attempt!=target) {
//			cout << "Please enter the letter: ";
//			cin >> letter;
//			if (badguess.find(letter) != string::npos || attempt.find(letter) != string::npos) {
//				cout << "You already guessed that!, You have " << guess << "times to guess" << endl;
//				continue;
//			}
//			int location = target.find(letter);
//			if (location == string::npos) {
//				badguess += letter;
//				cout << "Wrong guessing!";
//				cout << "You have " << --guess << " chances to guess.\n";
//				if (guess == 0) {
//					break;
//				}
//				cout << " Try again!\n";
//			}
//			while (location != string::npos) {
//				attempt[location] = letter;
//				location = target.find(letter, location + 1);
//			}
//			if (attempt == target)break;
//			cout << "Word: " << attempt << endl;
//		}
//		if (attempt == target) {
//			cout << "Good job! Do you want to try again?<y,n>\n";
//		}
//		else {
//			cout << "You failed. Do you want to try again?<y,n>\n";
//		}
//		cin >> choice;
//		choice = tolower(choice);
//	}
//}