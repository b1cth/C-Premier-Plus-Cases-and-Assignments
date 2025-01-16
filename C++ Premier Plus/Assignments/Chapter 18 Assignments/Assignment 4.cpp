//Note: the code below is 16.5 but it's not matching the assignment description

#include <memory>
#include <iostream>
#include <string>
class Report {
private:
	std::string str;
public:
	Report(std::string s) :str(s) { std::cout << "Object created!\n"; }
	~Report() { std::cout << "Object deleted!\n"; }
	void comment() const { std::cout << str << std::endl; }
};
int main() {
	/*{
		std::auto_ptr<Report> ps(new Report("using a auto_ptr."));
		ps->comment();
	}*/  //not supported in VS 2022
	{
		std::shared_ptr<Report> ps(new Report("using a shared_ptr."));
		ps->comment();
	}
	{
		std::unique_ptr<Report> pu(new Report("using a unique_ptr."));
		pu->comment();
	}
	return 0;
}