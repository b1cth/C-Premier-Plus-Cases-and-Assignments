//#include <iostream>
//#include <string>
//#include <vector>
//using std::vector, std::cin, std::cout, std::endl, std::string;
//struct Review {
//	string title;
//	int rating;
//};
//bool fillReview(Review& rv);
//void showReview(const Review& rv);
//int main() {
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
//		for (pd=books.begin();pd!=books.end();pd++)
//		{
//			showReview(*pd);
//		}
//		vector<Review> oldlist(books);
//		if (num > 3) {
//			books.erase(books.begin() + 1, books.begin() + 3);//delete the second element
//			cout << "after erase: \n";
//			for (pd = books.begin();pd != books.end();pd++)
//			{
//				showReview(*pd);
//			}
//			//insert 1 item
//			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
//			cout << "after insersion: \n";
//			for (pd = books.begin();pd != books.end();pd++)
//			{
//				showReview(*pd);
//			}
//			//swap
//			books.swap(oldlist);
//			cout << "after swapping: \n";
//			for (pd = books.begin();pd != books.end();pd++)
//			{
//				showReview(*pd);
//			}
//		}
//		else {
//			cout << "Nothing entered, bye.\n";
//		}
//	}
//	
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