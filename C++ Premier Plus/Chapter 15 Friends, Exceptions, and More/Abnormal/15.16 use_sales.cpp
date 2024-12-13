//#include "15.14 sales.h"
//#include <iostream>
//int main() {
//	using std::cout, std::cout, std::endl;
//	double vals1[12]{
//		1220,1456,1515,6165,1651,8494,
//		1651,1561,4658,1614,6156,1321
//	};
//	double vals2[12]{
//		41,48,21,15,41,15,
//		89,15,15,31,15,87
//	};
//	Sales sales1(2014, vals1, 12);
//	LabeledSales sales2("Blogstar", 2012, vals2, 12);
//	cout << "First try:\n";
//	try {
//		int i;
//		cout << "Year: " << sales1.Year() << endl;
//		for (i = 0; i < Sales::MONTHS; ++i)
//		{
//			cout << sales1[i] << " ";
//			if (i % 6 == 5) {
//				cout << endl;
//			}
//		}
//		cout << "\nYear: " << sales2.Year() << endl;
//		cout << "Label: " << sales2.Label() << endl;
//		for ( i = 0; i <= Sales::MONTHS; i++)
//		{
//			cout << sales2[i] << " ";
//			if (i % 6 == 5) {
//				cout << endl;
//			}
//		}
//	}
//	catch (const LabeledSales::nbad_index& bad) {
//		cout<<bad.what();
//		cout << "Company: " << bad.label_val() << endl;
//		cout << "bad index " << bad.bi_val() << endl;
//	}
//	catch (const Sales::Bad_Index& bad) {
//		cout << bad.what();
//		cout << "bad index " << bad.bi_val() << endl;
//	}
//}