#pragma once
#include <string>
#include <iostream>
using namespace std;
class TableTennisPlayer {
private:
	std::string firstname;
	std::string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const std::string& fn = "none", const std::string& ln = "none",
		bool ht = false);
	~TableTennisPlayer() {};
	void name()const;
	bool hastable()const { return hasTable; }
	void resetTable(bool v) { hasTable = v; }
};

class RatedPlayer :public TableTennisPlayer {
private:
	unsigned int rating;
public:
	RatedPlayer(const std::string& fn = "none", const std::string& ln = "none", bool ht = false, int rat = 0);
	RatedPlayer(TableTennisPlayer& tb, int rat);
	~RatedPlayer(){}
	unsigned int Rating()const { return rating; }
	void resetRating(unsigned int r) { rating = r; }
};