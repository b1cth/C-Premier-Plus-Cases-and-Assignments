#include "functions.h";
//返回结束位置
double* Fill_array_returnPointer(double* arr, int size) {
	int count = 0;
	double* pt;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter #" << i + 1 << endl;
		if (cin >> arr[i]) {
			count++;
		}
		else {
			cin.clear();
			cin.ignore();
			break;
		}
	}
	pt = &arr[count];
	return pt;
}

//开始和结束位置的showArray
void Show_array(const double* start, const double* end) {
	int j = 0;
	for (const double* i = start;i!=end ; i++)
	{
		cout << "#" << j + 1 << ": " << *i << endl;
		j++;
	}
}

//反转数组
void Reverse_array(double* start, double* end) {
	if ((start == end) || (start == end - 1)) {
		return;
	}
	--end;//只想最后一个元素
	while (start < end) {
		double temp;
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

//main
//int main()
//{
//	double temp_array[array_size];
//	double* end = Fill_array_returnPointer(temp_array, array_size);
//	int size = end - temp_array;
//	double* array = new double[size];
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = temp_array[i];
//	}
//	end = array + size;//end 设置为数组的末尾位置
//	cout << "Original: \n";
//	Show_array(array, end);
//	cout << "After reversed: \n";
//	Reverse_array(array, end);
//	Show_array(array, end);
//	delete[]array;
//}