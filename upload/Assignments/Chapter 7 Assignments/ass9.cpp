#include "functions.h";

int getinfo(student* pa, int n) {
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the #" << i + 1 << " name: " << endl;
		if (cin.getline(pa[i].fullname, SLEN)) {
			cout << "Enter " << pa[i].fullname << "\'s hobby: " << endl;
			cin.getline(pa[i].hobby, SLEN);
			cout << "Enter the oop level: " << endl;
			cin >> pa[i].ooplevel;
			cin.get();
			cout << endl;
			counter++;
		}
		else {
			return counter;
			break;
		}
		
	}
}

void display1(student st) {
	cout << "Full name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Oop Level: " << st.ooplevel << endl;
	cout << endl;
}

void display2(const student *ps) {
	cout << "Full name: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Oop Level: " << ps->ooplevel << endl;
	cout << endl;
}

void display3(const student* pa, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Full name: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Oop Level: " << pa[i].ooplevel << endl;
		cout << endl;
	}
}

//main
// 
//int main()
//{
//	cout << "Enter class size: ";
//	int class_size;
//	cin >> class_size;
//	while (cin.get() != '\n') {
//		continue;
//	}
//	student* ptr_stu = new student[class_size];
//	int entered = getinfo(ptr_stu, class_size);
//	for (int i = 0; i < entered; i++) {
//		display1(ptr_stu[i]);
//		display2(&ptr_stu[i]);
//	}
//	display3(ptr_stu, entered);
//	delete[]ptr_stu;
//	cout << "Done.\n";
//
//}