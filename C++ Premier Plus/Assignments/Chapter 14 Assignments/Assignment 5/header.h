#pragma once
#include <iostream>
#include <string>
using std::string;
class abstr_emp {
private:
	string fname;
	string lname;
	string job;
public:
	abstr_emp();
	abstr_emp(const string& fn, const string& ln, const string& j);
	virtual void showAll() const;
	virtual void setAll();
	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);
	virtual ~abstr_emp();
};
class employee : public abstr_emp {
public:
	employee();
	employee(const std::string& fn, const string& ln, const string& j);
	virtual void showAll() const;
	virtual void setAll();
};
class manager :virtual public abstr_emp {
private:
	int inchargeof;
protected:
	int InChargeOf() const { return inchargeof; }
	int& InChargeOf() { return inchargeof; }
public:
	manager();
	manager(const std::string& fn, const string& ln, const string& j, int ico = 0);
	manager(const abstr_emp& e, int ico);
	manager(const manager& m);
	virtual void show() const;
	virtual void showAll() const;
	virtual void set();
	virtual void setAll();
};
class fink : virtual public abstr_emp {
private:
	string reportsto;
protected:
	const string ReportsTo()const { return reportsto; }
	string& ReportsTo() { return reportsto; }
public:
	fink();
	fink(const std::string& fn, const string& ln, const string& j, const string& rpo);
	fink(const abstr_emp& e, const string& rpo);
	fink(const fink& f);
	virtual void show() const;
	virtual void showAll() const;
	virtual void set();
	virtual void setAll();
};
class highfink : public manager, public fink {
public:
	highfink();
	highfink(const std::string& fn, const string& ln, const string& j, const string& rpo, int ico);
	highfink(const abstr_emp& e, const string& rpo, int ico);
	highfink(const fink& f, int ico);
	highfink(const manager& m, const string& rpo);
	highfink(const highfink& h);
	virtual void showAll() const;
	virtual void setAll();
};