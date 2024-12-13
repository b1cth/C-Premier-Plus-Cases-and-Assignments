#include "14.10 Workermi.h"
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//Worker Method
Worker::~Worker() {}
void Worker::data() const {
	cout << "Fullname: " << fullname << endl;
	cout << "ID: " << id << endl;
}
void Worker::get() {
	cout << "Please enter the fullname: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	/*while (cin.get()!='\0') {
		continue;
	}*/
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
//Waiter method
Waiter::~Waiter() {}
void Waiter::data() const {
	cout << "Panache rating: " << panache << endl;
}
void Waiter::get() {
	cout << "Enter waiter's pannache rating: " << endl;
	cin >> panache;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void Waiter::set() {
	Worker::get();
	get();
}
void Waiter::show() const {
	cout << "Category Waiter\n";
	Worker::data();
	data();
}
//singer method
const char* Singer::pv[] = { "other", "alto", "contralto", "soprano",
		"base", "baritone", "tennor" };
Singer::~Singer() {

}
void Singer::data() const {
	cout << "Voice range: " << pv[voice] << endl;
}
void Singer::get() {
	cout << "Enter the number for singer's vocal range: \n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i + 1 << ": " << pv[i] << "    ";
		if (i % 4 == 3) {
			cout << endl;
		}
	}
	if (i % 4 != 0) {
		cout << endl;
	}
	while (cin >> voice && (voice < 0 || voice >= Vtypes)) {
		cout << "Voice must be >0 and <= " << Vtypes << endl;
		/*while (cin.get() != '\0') {
			continue;
		}*/
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}
void Singer::set() {
	Worker::get();
	get();
}
void Singer::show() const {
	cout << "Category Singer\n";
	Worker::data();
	data();
}

//SingerWaiter Methods
void SingingWaiter::data() const {
	Singer::data();
	Waiter::data();
}
void SingingWaiter::get() {
	Singer::get();
	Waiter::get();
}
void SingingWaiter::set() {
	Worker::get();
	SingingWaiter::get();
}
void SingingWaiter::show() const {
	cout<< "Category Singing Waiter\n";
	Worker::data();
	Singer::data();
	Waiter::data();
}