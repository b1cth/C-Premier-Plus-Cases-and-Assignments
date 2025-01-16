#pragma once
#include <iostream>
#include <string>
#include <map>
#include <ctime>
#include <sstream>
using namespace std;
string select_package();
map<int, std::string> createGuestMap();
string getCurrentDate();
string returnGuestName(int roomNumber, const map<int,string>&);
