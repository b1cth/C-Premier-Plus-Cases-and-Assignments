#pragma once
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;
class Person {
private:
	std::string firstName;
	std::string lastName;
public:
	Person(const std::string& fn = "No Name", const std::string& ln = "No Name")
		:firstName(fn), lastName(ln) {}
	virtual void show() const { cout << firstName << " " << lastName << endl; }
	virtual ~Person(){}
};

class Gunslinger :virtual public Person {
private:
	int marks;
	double drawTime;
public:
	Gunslinger(const std::string& fn = "No Name", const std::string& ln = "No Name", int m=0,double d=0.5)
		: Person(fn, ln), marks(m),drawTime(d){}
	double draw(){ marks++; return drawTime; }
	virtual void show() const;
	virtual ~Gunslinger() {}
};

class Card {
public: 
	enum Suit { Spade = 0, Heart = 1, Diamond = 2, Club = 3 };
private:
	Suit suit;
	int number;
public:
	Card() :suit(Suit::Spade), number(1) {}
	Card(Suit s, int n);
	int returnNumber() const { return number; }
	Suit getSuit() const { return suit; }
	const std::string suitToString() const;
	void setCard(Suit s, int n);
	friend std::ostream& operator<<(std::ostream& is, const Card& c);
};
class PokerPlayer :virtual public Person {
private:
	Card card;
public:
	PokerPlayer(const std::string& fn = "No Name", const std::string& ln = "No Name") 
				:Person(fn,ln),card() {}
	Card& draw();
	virtual ~PokerPlayer() {}
	void showCard() const;
};
class BadDude :public Gunslinger, public PokerPlayer {
public:
	BadDude(const std::string& fn = "No Name", const std::string& ln = "No Name")
		:Person(fn, ln){}
	double Gdraw() { return Gunslinger::draw(); }
	Card& Cdraw() { return PokerPlayer::draw(); }
	virtual void show() const;
	virtual ~BadDude() {}
};