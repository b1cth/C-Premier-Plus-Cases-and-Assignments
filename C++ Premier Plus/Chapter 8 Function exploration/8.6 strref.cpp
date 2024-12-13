//#include <iostream>
//#include <string>
//using namespace std;
//
//struct free_throws {
//	string name;
//	int made;
//	int attemps;
//	float percent;
//};
//
//void set_pc(free_throws& ft);
//void display(const free_throws& ft);
//free_throws& accumulate(free_throws& target, free_throws& source);
//int main() {
//	free_throws one = { "Ifelsa Branch",13,14 };
//	free_throws two= {"Andor Knott",10,16 };
//	free_throws three = { "Minnie Max",7,9 };
//	free_throws four = { "Whily Looper",5,9 };
//	free_throws five = { "Throwgoods",6,14 };
//	free_throws team = { "Long Long",0,0 };
//	
//	set_pc(one);
//	set_pc(two);
//	set_pc(three);
//	set_pc(four);
//	set_pc(five);
//	
//	
//	/*isplay(one);
//	display(two);
//	display(three);
//	display(four);
//	display(five);*/
//
//	display(accumulate(team,one));
//	free_throws dup=accumulate(accumulate(accumulate(accumulate(team, two), three),four),five);
//	display(dup);
//	display(team);
//	
//
//	return 0;
//}
//
//void set_pc(free_throws& ft) {
//	if (ft.attemps != 0) {
//		ft.percent = 100.0*((float)ft.made / (float)ft.attemps);
//	}
//	else {
//		ft.percent = 0;
//	}
//}
//
//void display(const free_throws& ft) {
//	cout << "the percentage of " << ft.name << " is " << ft.percent << "%\n";
//}
//
//free_throws& accumulate(free_throws& target, free_throws& source) {
//	target.made += source.made;
//	target.attemps += source.attemps;
//	set_pc(target);
//	return target;
//}