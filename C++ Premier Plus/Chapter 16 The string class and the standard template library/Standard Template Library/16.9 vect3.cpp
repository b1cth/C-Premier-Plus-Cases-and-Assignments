//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <random>
//using std::vector, std::cin, std::cout, std::endl, std::string;
//struct Review {
//	string title;
//	int rating;
//};
//bool fillReview(Review& rv);
//void showReview(const Review& rv);
//bool operator<(const Review& rv, const Review& rt);
//bool worsethan(const Review& rv, const Review& rt);
//int main() {
//	std::random_device rd;
//	std::mt19937 g(rd());
//	vector<Review> books;
//	Review temp;
//
//	while (fillReview(temp)) {
//		books.push_back(temp);
//	}
//	int num = books.size();
//	if (num > 0) {
//		for (int i = 0; i < books.size(); i++)
//		{
//			showReview(books[i]);
//		}
//		cout << "Reprising:\n"
//			<< "\ttitle\trating\n";
//		vector<Review>::iterator pd;
//		for_each(books.begin(), books.end(), showReview);//for_each
//		vector<Review> oldlist(books);
//		
//		sort(books.begin(), books.end());
//		cout << "Sort by title:\n";
//		for_each(books.begin(), books.end(), showReview);
//		
//
//		sort(books.begin(), books.end(), worsethan);
//		cout << "Sort by rating:\n";
//		for_each(books.begin(), books.end(), showReview);
//		std::shuffle(books.begin(), books.end(),g);
//		cout << "after shuffling:\n";
//		for_each(books.begin(), books.end(), showReview);
//	}
//	else {
//		cout << "no data entered.\n";
//	}
//
//}
//
//bool fillReview(Review& rv) {
//	cout << "Enter the book title and rating: (quit to quit)\n";
//	cout << "Enter title: ";
//	getline(cin, rv.title);
//	if (rv.title == "quit") {
//		return false;
//	}
//	cout << "Enter ratings: ";
//	cin >> rv.rating;
//	if (!cin) {
//		return false;
//	}
//	/*while (cin.get()) {
//		continue;
//	}*/
//	cin.ignore();
//	return true;
//}
//void showReview(const Review& rv) {
//	cout << "\t" << rv.title << "\t" << rv.rating << endl;
//}
//bool operator<(const Review& rv, const Review& rt) {
//	if (rv.title < rt.title) {
//		return true;
//	}
//	else if (rv.title == rt.title && rv.rating < rt.rating) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool worsethan(const Review& rv, const Review& rt) {
//	if (rv.rating < rt.rating) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}