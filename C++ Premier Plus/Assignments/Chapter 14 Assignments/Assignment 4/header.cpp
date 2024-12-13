#include "header.h"
#include <random>
void Gunslinger::show() const {
	Person::show();
	cout << "Draw Time: " << drawTime << endl;
	cout << "Marks: " << marks << endl;
}
Card::Card(Suit s, int n) {
	if (n < 1 || n>52) {
		cout << "Invalid Number.\n";
		return;
	}
	suit = s;
	number = n;
}
const std::string Card::suitToString() const {
	switch (suit) {
	case Spade: 
		return "Spade";
	case Heart:
		return "Heart";
	case Diamond:
		return "Diamond";
	case Club:
		return "Club";
	default:
		return "Error";
	}
}
void Card::setCard(Suit s, int n) {
	if (n < 1 || n>52) {
		cout << "Invalid Number.\n";
		return;
	}
	suit = s;
	number = n;
}
Card& PokerPlayer::draw() {
	srand(time(0));
	int tempNum = rand() % 52;
	Card::Suit tempSuit = (Card::Suit)(rand() % 4);
	card.setCard(tempSuit, tempNum);
	return card;
}
std::ostream& operator<<(std::ostream& os, const Card& c) {
	os << "Suit: " << c.suitToString() << endl;
	os << "Card number: " << c.returnNumber() << endl;
	return os;
}
void PokerPlayer::showCard() const {
	cout << card;
}
void BadDude::show() const {
	Gunslinger::show();
	PokerPlayer::showCard();
}