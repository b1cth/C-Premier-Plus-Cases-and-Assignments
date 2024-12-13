#include <iostream>
#include <cstdlib>


template<typename t1,typename t2>
class Pair {
private:
	t1 a;
	t2 b;
public:
	t1& first();
	t2& second();
	t1 first() const { return a; }
	t2 second() const { return b; }
	Pair(const t1& m, const t2& n) :a(m), b(n) {}
	Pair() {}
};

template<typename t1, typename t2>
t1& Pair<t1,t2>::first() {
	return a;
}
template<typename t1, typename t2>
t2& Pair<t1, t2>::second() {
	return b;
}

int main() {
	using namespace std;
	Pair<string, int> ratings[4] = {
		Pair<string,int>{"The Purpled Duck", 5},
		Pair<string,int>{"Jaquie's Frisco Al",4},
		Pair<string,int>{"Cafe Souffle", 5},
		Pair<string,int>{"Bertie's Eates",3}
	};
	int joints = sizeof(ratings) / sizeof(Pair<string, int>);
	cout << "Joints:\t Eatery:\n";
	for (int i = 0; i < joints; i++)
	{
		cout << ratings[i].second() << ":\t"
			<< ratings[i].first() << endl;
	}
	cout << "Opps! Revised rating:\n";
	ratings[3].first() = "Bertie's Fab Eats";
	ratings[3].second() = 6;
	cout << ratings[3].second() << ":\t"
		<< ratings[3].first() << endl;
	return 0;
}