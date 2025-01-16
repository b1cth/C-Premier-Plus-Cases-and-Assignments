//#include <iostream>
//using namespace std;
//
//int main() {
//	long total_seconds;
//	cout << "Enter the number of seconds: ";
//	cin >> total_seconds;
//	int hours, minutes, secconds,days;
//	int fhour;
//	/*hour = seconds / 3600;
//	day = hour / 24;
//
//	fhour = (seconds - day * 24 * 60 * 60) / 3600;
//	minute = (seconds - day * 24 * 60 * 60 - fhour * 60 * 60) / 60;
//	sec = seconds - day * 24 * 60 * 60 - fhour * 60 * 60 - minute * 60;*/
//
//	int days = total_seconds / 86400;
//	int hours = (total_seconds % 86400) / 3600;
//	int minutes = ((total_seconds % 86400) % 3600) / 60;
//	int seconds = ((total_seconds % 86400) % 3600) % 60;
//
//	cout << seconds << " seconds = " << days << " day(s), " << hours << " hours, " << minutes 
//		<< " minutes, " << seconds << " seconds." << endl;
//
//	return 0;
//}