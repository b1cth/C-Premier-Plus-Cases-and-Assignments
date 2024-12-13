//#include "14.7 Worker0.h"
//using namespace std;
//
//using std::cin;
//using std::cout;
//using std::endl;
////Worker Method
//Worker::~Worker(){}
//void Worker::set() {
//	cout << "Please enter the fullname: ";
//	getline(cin,fullname);
//	cout << "Enter worker's ID: ";
//	cin >> id;
//	/*while (cin.get()!='\0') {
//		continue;
//	}*/
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//}
//void Worker::show() const {
//	cout << "Fullname: " << fullname << endl;
//	cout << "ID: " << id << endl;
//}
////Waiter method
//Waiter::~Waiter(){}
//void Waiter::set() {
//	Worker::set();
//	cout << "Enter waiter's pannache rating: " << endl;
//	cin >> panache;	
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//}
//void Waiter::show() const {
//	Worker::show();
//	cout << "Panache rating: " << panache << endl;
//}
////singer method
//const char* Singer::pv[] = { "other", "alto", "contralto", "soprano",
//		"base", "baritone", "tennor" };
//Singer::~Singer() {
//
//}
//void Singer::set() {
//	Worker::set();
//	cout << "Enter the number for singer's vocal range: \n";
//	int i;
//	for (i = 0; i < Vtypes; i++)
//	{
//		cout << i+1 << ": " << pv[i] << "    ";
//		if (i % 4 == 3) {
//			cout << endl;
//		}
//	}
//	if (i % 4 != 0) {
//		cout << endl;
//	}
//	while (cin >> voice && (voice < 0 || voice >= Vtypes)) {
//		cout << "Voice must be >0 and <= " << Vtypes << endl;
//		/*while (cin.get() != '\0') {
//			continue;
//		}*/
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	}
//
//}
//void Singer::show() const {
//	cout << "Category Singer\n";
//	Worker::show();
//	cout << "Voice range: " << pv[voice] << endl;
//}