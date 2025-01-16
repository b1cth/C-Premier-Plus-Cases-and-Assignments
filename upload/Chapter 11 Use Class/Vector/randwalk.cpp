#include "vector.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
int main() {
	using VECTOR::Vector;
	using namespace std;
	double target;
	double dstep;
	int degree;
	Vector result(0.0, 0.0);
	Vector CurrentPos;
	unsigned int steps = 0;

	ofstream output;
	output.open("record.txt");

	int record[20];
	unsigned int counter = 0;
	//int arr_counter = 0;

	srand(time(0));
	cout << "Enter the target distance: \n";
	while (cin >> target) {
		cout << "Enter the step distance: \n";
		if (!(cin >> dstep)) {
			break;
		}
		result = Vector(0.0, 0.0); // **修正**: 每次新的目标距离输入时重置 result
		steps = 0; // **修正**: 每次新的目标距离输入时重置 steps
		if (output.is_open()) {
			output << "Target Distance: " << target << ", Step Size: " << dstep << "\n";
		}
		while (result.magval() < target) {
			degree = rand() % 360;
			CurrentPos.reset(dstep, degree, Vector::POL);
			CurrentPos.rect_mode();
			result = result + CurrentPos;
			output << steps++ << ": (x, y) = " << " (" << CurrentPos.xval() << ", " << CurrentPos.yval() << ")\n";
		}
		output << "It took " << steps << " steps.\n";
		result.rect_mode();
		output << "Location" << result << endl;
		result.polar_mode();
		output<<"In polar mode: "<< result << endl;

		if (counter < 20) { // 确保不超过数组大小
			record[counter] = steps;
			counter++;
		}
		else {
			cout << "Record array is full. Cannot store more results." << endl;
		}
		cout << "Enter target distance: " << endl;
		while (cin.get() != '\n') {
			continue;
		}
	}
	
	
	int max, min,total=0;
	double avg_steps;
	max = min = record[0];
	int i = 0;
	for ( i;i < counter; i++)
	{
		cout << record[i] << endl;
		if (record[i] < min) {
			min = record[i];
		}
		if (record[i] > max) {
			max = record[i];
		}
		total += record[i];
	}
	avg_steps = total / i;
	cout << "Max Steps: " << max << " Minimium Steps: " << min << endl;
	cout << "Average steps takes " << avg_steps << endl;
	cout << "Bye.";
	return 0;
}
