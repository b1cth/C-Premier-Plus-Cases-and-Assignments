//#include "14.1 studentc.h"
//#include <string>
//double Student::average() const {
//	if (scores.size() > 0) {
//		return scores.sum() / scores.size();
//	}
//	return 0;
//}
//const std::string& Student::Name() const {
//	return name;
//}
//double& Student::operator[](int i) {
//	return scores.operator[](i);
//}
//
//double Student::operator[](int i) const {
//	return scores.operator[](i);
//}
//
//std::istream& operator>>(std::istream& is, Student& st) {
//	is >> st.name;
//	return is;
//}
//std::istream& getline(std::istream& is, Student& st) {
//	getline(is, st.name);
//	return is;
//}
//std::ostream& Student::arr_out(std::ostream& os) const {
//	int i;
//	int limit = scores.size();
//	if(limit>0)
//	{
//		for (i = 0; i < limit; i++)
//		{
//			os << scores[i];
//			if (i % 5 == 4) {
//				os << std::endl;
//			}
//		}
//		if (i % 5 != 0) {
//			os << std::endl;
//		}
//	}
//	else {
//		os << "Empty Array!" << std::endl;
//	}
//	return os;
//}
//std::ostream& operator<<(std::ostream& os, const Student& st){
//	os << "Name: " << st.name << std::endl;
//	st.arr_out(os);
//	return os;
//}