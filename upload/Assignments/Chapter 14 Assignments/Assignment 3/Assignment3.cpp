#include "Worker.h"
#include <cstring>
#include "template.h"
#include <vcruntime_string.h>
const int SIZE = 5;
int main() {
	QueueTP<Worker*> queue(SIZE);
	using std::cin;
	using std::cout;
	using std::endl;
	int ct;
	Worker* temp = nullptr;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee catagory: \n"
			<< "w: waiter  s: singer  "
			<< "t: singingwaiter  q: quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL) {
			cout << "Please enter w s t or q\n";
			cin >> choice;
		}
		if (choice == 'q') {
			break;
		}
		switch (choice) {
		case 'w':
			temp = new Waiter;
			break;
		case 's':
			temp = new Singer;
			break;
		case 't':
			temp = new SingingWaiter;
			break;
		default:
			break;
		}
		cin.get();
		temp->set();
		queue.enQueue(temp);
	}
	cout << "\nHere's your staffs: \n";
	Worker* worker;
	while (!queue.isEmpty()) {
		queue.deQueue(worker);
		worker->show();
		cout << endl;
		delete worker;
	}
	cout << "bye..." << endl;
}