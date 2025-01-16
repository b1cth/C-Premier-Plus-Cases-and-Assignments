#include "functions.h";
//填充数组
int Fill_array(double *arr,int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter #" << i + 1 << endl;
		if (cin >> arr[i]) {
			count++;
		}
		else {
			break;
		}
		
	}
	return count;
}
//显示数组
void Show_array(const double* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "#" << i + 1 << ": " << arr[i] << endl;
	}
}

//反转数组
void Reverse_array(double* arr, int size) {
	double temp;
	for (int i = 0; i < size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - i-1];
		arr[size - i-1] = temp;

	}
}
//反转数组中除第一个和最后一个元素之外的所有元素
//void Reverse_inner_array(double* arr, int size) {
//	double temp;
//	for (int i = 1; i < (size - 1) / 2 + 1; i++) {
//		temp = arr[i];
//		arr[i] = arr[size - i - 1];
//		arr[size - i - 1] = temp;
//	}
//}

//main
//int main()
//{
//	double temp_array[array_size];
//	int actualFill = Fill_array(temp_array, array_size);
//	double* array = new double[actualFill];
//	for (int i = 0; i < actualFill; i++)
//	{
//		array[i] = temp_array[i];
//	}
//	Show_array(array, actualFill);
//	Reverse_array(array, actualFill);
//	cout << "Reversed array:\n";
//	Show_array(array, actualFill);
//	delete[]array;
//}