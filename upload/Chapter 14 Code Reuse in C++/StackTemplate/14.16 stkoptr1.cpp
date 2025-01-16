#include "14.15 stcktp1.h"
#include <ctime>
#include <iostream>
const int NUM = 10;
int main() {
	using namespace std;
	const char* in[NUM]{ "1: Hank Gilgamesh ", "2: Kiki Ishtar", "3: Bettt Rocker", "4: Ian Flagranti",
						"5: Wolfgang Kibble", "6: Portia Koop", "7: Joy Almondo", "8: Xaverie Paprika",
						"9: Juan Moore", "10: Misha Mache" };
	srand(time(0));
	cout << "Please enter the stack size: \n";
	int stacksize;
	const char* outbasket[NUM];
	cin >> stacksize;
	Stack<const char*> st(stacksize);

	int processed = 0;
	int nextin = 0;

	while (processed < NUM) {
		if (st.isEmpty()) {
			st.push(in[nextin++]);
		}
		else if (st.isFull()) {
			st.pop(outbasket[processed++]);
		}
		else if (rand() % 2 && nextin < NUM) {
			st.push(in[nextin++]);
		}
		else {
			st.pop(outbasket[processed++]);
		}
	}
	for (int i = 0; i < NUM; i++)
	{
		cout << outbasket[i] << endl;
	}
	cout << "Bye...\n";
}