//#include "14.1 studentc.h"
#include "14.4 studenti.h"
const int pupiles = 3;
const int quizzes = 5;
using namespace std;
void set(Student& sa, int n);
int main() {
	Student ada[pupiles] = { Student(quizzes),Student(quizzes),Student(quizzes) };
	int i;
	for ( i = 0; i < pupiles; i++)
	{
		set(ada[i], quizzes);
	}
	cout << "\nStudent list: \n";
	for (i = 0; i < pupiles; i++)
	{
		cout << ada[i].Name() << endl;
	}
	cout << "\n Results: ";
	for ( i = 0; i < pupiles; i++)
	{
		cout << endl << ada[i];
		//cout << "Average: " << ada[i].average() << endl;
		cout << "Size: " << ada[i].size() << endl; //using method
	}
	cout << "Done.\n";
	return 0;
}
void set(Student& sa, int n) {
	cout << "Please enter the student's name: ";
	getline(cin, sa);
	cout << "Please enter " << n << " quiz scores:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> sa[i];
	}
	/*while (cin.get() != '\0') {
		continue;
	}*/
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}