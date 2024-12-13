//#include <iostream>
//#include <new>
//#include <exception>
//#include <cstdlib>
//
//int main() {
//	struct Big {
//		double stuff[10000];
//	};
//	Big* bp;
//	try {
//		std::cout << "Trying to get a big block of memory\n";
//		//bp = new Big[1600000];
//		bp = new(std::nothrow) Big; //不抛出异常
//		//bp = new(std::nowthrow)Big; //抛出异常
//		std::cout << "Got past the new request.\n";
//	}
//	catch (std::bad_alloc& ba) {
//		std::cout << "Caught the exception! \n";
//		std::cout<<ba.what() << std::endl;
//		exit(EXIT_FAILURE);
//	}
//	std::cout << "Memory successfully allocated\n";
//	bp[0].stuff[0] = 4;
//	std::cout << bp[0].stuff[0] << std::endl;
//	delete[] bp;
//	return 0;
//}