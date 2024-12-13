#include <set>
#include <algorithm>
int reduce(long ar[], int n) {
	using namespace std;
	set<long> tempset(ar, ar + n);
	return tempset.size();
}