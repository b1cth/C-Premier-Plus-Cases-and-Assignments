//#include "15.1 tv.h"
#include "15.4 tvfm.h"
#include <iostream>
bool TV::volup() {
	if (volume == MaxVal) {
		return false;
	}
	volume++;
	return true;
}

bool TV::voldown(){
	if (volume == 0) {
		return false;
	}
	volume--;
	return true;
}
void TV::chanup() {
	if (channel == maxchannel) {
		channel = 2;
	}
	channel++;
}
void TV::chandown() {
	if (channel == 2) {
		channel = maxchannel;
	}
	channel--;
}
void TV::settings()const {
	using std::cout, std::endl;
	cout << "TV is " << ((state == On) ? "On" : "Off") << endl;
	if (state == On) {
		cout << "Volume setting: " << volume << endl;
		cout << "Channel setting: " << channel << endl;
		cout << "Mode: " << ((mode == Cable) ? "Cable" : "Antenna") << endl;
		cout << "Input: " << ((input == tv) ? "tv" : "DVD") << endl;
	}
}