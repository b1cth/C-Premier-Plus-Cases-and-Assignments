//#include <iostream>
//using namespace std;
//const int Lens = 66;
//void subdivide(char* ch, int min, int max, int level);
//int main() {
//	char ruler[Lens];
//	int min = 0;
//	int max = Lens - 2;
//	ruler[min] = ruler[max] = '|';
//	ruler[Lens - 1] = '\0';
//	int i;
//	for (i = 1; i < Lens - 2; i++) {
//		ruler[i] = ' ';
//	}
//	cout << ruler << endl;;
//
//	for (i = 1; i <= 6; i++) {
//
//		subdivide(ruler, min, max,i);
//		cout << ruler << endl;
//		for (int j = 1; j < Lens - 2; j++) {
//			ruler[j] = ' ';
//		}
//	}
//
//	return 0;
//}
//
//void subdivide(char* ch, int min, int max,int level) {
//	if (level == 0) {
//		return;
//	}
//	int mid = (min + max) / 2;
//	ch[mid] = '|';
//	subdivide(ch, min, mid,level-1);
//	subdivide(ch, mid, max,level-1);
//}
////Ê¾Àý£º
//     //           32 (level 3)
//     //         /              \
//     //    16 (level 2)      48 (level 2)
//     //   /       \          /        \
//     //8 (1)   24 (1)   40 (1)   56 (1)
//     /// \     / \     / \      /  \
