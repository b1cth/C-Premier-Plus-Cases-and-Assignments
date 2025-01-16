//#pragma once
//#include <string>
//#include <iostream>
//class Worker {
//private:
//	std::string fullname;
//	long id;
//public:
//	Worker():fullname("No Name"), id(0L){}
//	Worker(const std::string name,long n):fullname(name),id(n){}
//	virtual ~Worker() = 0;
//	virtual void set();
//	virtual void show() const;
//};
//
//class Waiter :public Worker {
//private:
//	int panache;
//public:
//	Waiter():Worker(),panache(0){}
//	Waiter(const std::string name, long n, int i = 0):Worker(name,n),panache(0){}
//	Waiter(const Worker& wk, int p = 0):Worker(wk),panache(p){}
//	virtual ~Waiter();
//	virtual void set();
//	virtual void show() const;
//};
//
//class Singer:public Worker{
//protected:
//	enum{other, alto, contralto, soprano,
//		base, baritone, tennor};
//	enum{Vtypes=7};
//private:
//	const static char* pv[Vtypes];
//	int voice;
//public:
//	Singer():Worker(),voice(other){}
//	Singer(const std::string name, long n, int i = other):Worker(name, n), voice(i){}
//	Singer(const Worker& wk, int i = other) :Worker(wk), voice(i){}
//	~Singer();
//	virtual void set();
//	virtual void show() const;
//};
//
