#include "13.1 tabtenn0.h"
TableTennisPlayer::TableTennisPlayer(const std::string& fn, 
	const std::string& ln,bool ht ):firstname(fn),lastname(ln),hasTable(ht){}

void TableTennisPlayer::name()const {
	std::cout << firstname << ", " << lastname;
}

RatedPlayer::RatedPlayer(const std::string& fn, const std::string& ln, bool ht, int rat) :
	TableTennisPlayer(fn, ln, ht), rating(rat) {}

RatedPlayer::RatedPlayer(TableTennisPlayer& tb, int rat) :TableTennisPlayer(tb), rating(rat) {}