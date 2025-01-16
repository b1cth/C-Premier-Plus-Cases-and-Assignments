//#include <iostream>
//using namespace std;
//struct travel_time {
//	int hours;
//	int minitues;
//};
//const int mins_per_hour = 60;
//
//travel_time time(travel_time t1, travel_time t2);
//void showtime(travel_time total);
//
//int main() {
//	travel_time day1 = { 5,50 };
//	travel_time day2 = { 9,26 };
//	travel_time intotal = time(day1, day2);
//	showtime(intotal);
//
//	return 0;
//}
//
//travel_time time(travel_time t1, travel_time t2){
//	travel_time total;
//	total.hours = t1.hours + t2.hours + (t1.minitues + t2.minitues) / mins_per_hour;
//	total.minitues = (t1.minitues + t2.minitues) % mins_per_hour;
//
//	return total;
//}
//
//void showtime(travel_time total) {
//	cout << "It took " << total.hours << " hours and " << total.minitues << " minitues." << endl;
//}