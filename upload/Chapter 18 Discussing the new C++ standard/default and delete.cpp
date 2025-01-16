//class someclass {
//public:
//	someclass() = default;
//	someclass(const someclass&) = delete;
//	someclass& operator=(const someclass&) = delete;
//	someclass(someclass&&) = default;
//	someclass& operator=(someclass&&) = default;
//	someclass& operator+(const someclass&)const;
//
//public:
//	void redo(double);
//	void redo(int) = delete;
//};
//
//
//int main() {
//	someclass sc;
//	//sc.redo(5); error
//}
//
