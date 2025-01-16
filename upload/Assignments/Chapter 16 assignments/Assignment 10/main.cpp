#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
using std::vector, std::cin, std::cout, std::endl, std::string;
struct Review {
	string title;
	int rating;
	double price;
};
bool fillReview(Review& rv);
void showReview(const std::shared_ptr<Review>& rv);
void showinOriginal(const std::shared_ptr<Review>& rv);
bool sortByAlphabet(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt);
bool sortByAscendingRating(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt);
bool sortByDescendingRating(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt);
bool sortByAscendingPrice(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt);
bool sortByDecendingPrice(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt);
void show(const vector<std::shared_ptr<Review>>& vessel);

int main() {
	std::random_device rd;
	std::mt19937 g(rd());
	vector<std::shared_ptr<Review>> books;
	Review temp;
	std::shared_ptr<Review> tempptr;
	while (fillReview(temp)) {
		tempptr.reset(new Review(temp));
		books.push_back(tempptr);
	}
	if (books.size() == 0) {
		cout << "Nothing entered, program terminating...\n";
		return 0;
	}
	show(books);
}

bool fillReview(Review& rv) {
	cout << "Enter the book title and rating: (quit to quit)\n";
	cout << "Enter title: ";
	getline(cin, rv.title);
	if (rv.title == "quit") {
		return false;
	}
	cout << "Enter ratings: ";
	cin >> rv.rating;
	if (!cin) {
		return false;
	}
	cout << "Enter price: ";
	cin >> rv.price;
	if (!cin) {
		return false;
	}
	cin.ignore();
	return true;
}
void showReview(const std::shared_ptr<Review>& rv) {
	cout << "\t" << rv->title << "\t" << rv->rating << "\t" << rv->price << endl;
}
void showinOriginal(const std::shared_ptr<Review>& rv) {
	cout << "\t" << rv->title << "\t" << rv->rating << "\t" << rv->price << endl;
}
bool sortByAlphabet(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt) {
	if (rv->title < rt->title) {
		return true;
	}
	else {
		return false;
	}
}
bool sortByAscendingRating(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt) {
	if (rv->rating < rt->rating) {
		return true;
	}
	else {
		return false;
	}
}
bool sortByDescendingRating(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt) {
	if (rv->rating > rt->rating) {
		return true;
	}
	else {
		return false;
	}
}
bool sortByAscendingPrice(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt) {
	if (rv->price < rt->price) {
		return true;
	}
	else {
		return false;
	}
}
bool sortByDecendingPrice(const std::shared_ptr<Review>& rv, const std::shared_ptr<Review>& rt) {
	if (rv->price > rt->price) {
		return true;
	}
	else {
		return false;
	}
}

void show(const vector<std::shared_ptr<Review>>& vessel) {
	system("cls");
	std::cout << "Choose how you want to sort the display:\n";
	cout << "1.Sort By Alphabet.\n";
	cout << "2.Sort By Ascending Rating.\n";
	cout << "3.Sort By Decending Rating.\n";
	cout << "4.Sort By Ascending Price.\n";
	cout << "5.Sort By Decending Price.\n";
	cout << "6.Show By Original Order.\n";
	int chioice = 0;
	while (cin >> chioice) {
		vector<std::shared_ptr<Review>> temp(vessel);
		switch (chioice) {
		case 1:
			cout << "\t" << "Title" << "\t" << "Ratring" << "\t" << "Price" << endl;
			std::sort(temp.begin(), temp.end(), sortByAlphabet);
			std::for_each(temp.begin(), temp.end(), showReview);
			cout << "Choose a new way to sort or enter 0 to quit.\n";
			break;
		case 2:
			cout << "\t" << "Title" << "\t" << "Ratring" << "\t" << "Price" << endl;
			std::sort(temp.begin(), temp.end(), sortByAscendingRating);
			std::for_each(temp.begin(), temp.end(), showReview);
			cout << "Choose a new way to sort or enter 0 to quit.\n";
			break;
		case 3:
			cout << "\t" << "Title" << "\t" << "Ratring" << "\t" << "Price" << endl;
			std::sort(temp.begin(), temp.end(), sortByDescendingRating);
			std::for_each(temp.begin(), temp.end(), showReview);
			cout << "Choose a new way to sort or enter 0 to quit.\n";
			break;
		case 4:
			cout << "\t" << "Title" << "\t" << "Ratring" << "\t" << "Price" << endl;
			std::sort(temp.begin(), temp.end(), sortByAscendingPrice);
			std::for_each(temp.begin(), temp.end(), showReview);
			cout << "Choose a new way to sort or enter 0 to quit.\n";
			break;
		case 5:
			cout << "\t" << "Title" << "\t" << "Ratring" << "\t" << "Price" << endl;
			std::sort(temp.begin(), temp.end(), sortByDecendingPrice);
			std::for_each(temp.begin(), temp.end(), showReview);
			cout << "Choose a new way to sort or enter 0 to quit.\n";
			break;
		case 6:
			cout << "\t" << "Title" << "\t" << "Ratring" << "\t" << "Price" << endl;
			std::for_each(temp.begin(), temp.end(), showinOriginal);
			cout << "Choose a new way to sort or enter 0 to quit.\n";
			break;
		default:
			std::cout << "Program terminated.\nBye...\n";
			return;
		}
	}
}