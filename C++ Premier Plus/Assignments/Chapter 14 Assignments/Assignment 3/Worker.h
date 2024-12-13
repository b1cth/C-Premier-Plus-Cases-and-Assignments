#pragma once
#include <string>
#include <iostream>
class Worker {
private:
	std::string fullname;
	long id;
protected:
	virtual void data() const;
	virtual void get();
public:
	Worker() :fullname("No Name"), id(0L) {}
	Worker(const std::string name, long n) :fullname(name), id(n) {}
	virtual ~Worker() = 0;
	virtual void set() = 0;
	virtual void show() const = 0;
};

class Waiter :virtual public Worker {
private:
	int panache;
protected:
	virtual void data() const;
	virtual void get();
public:
	Waiter() :Worker(), panache(0) {}
	Waiter(const std::string name, long n, int i = 0) :Worker(name, n), panache(i) {}
	Waiter(const Worker& wk, int p = 0) :Worker(wk), panache(p) {}
	virtual ~Waiter();
	virtual void set();
	virtual void show() const;
};

class Singer :virtual public Worker {
protected:
	enum {
		other, alto, contralto, soprano,
		base, baritone, tennor
	};
	enum { Vtypes = 7 };
	virtual void data() const;
	virtual void get();
private:
	const static char* pv[Vtypes];
	int voice;
public:
	Singer() :Worker(), voice(other) {}
	Singer(const std::string name, long n, int i = other) :Worker(name, n), voice(i) {}
	Singer(const Worker& wk, int i = other) :Worker(wk), voice(i) {}
	~Singer();
	virtual void set();
	virtual void show() const;
};
class SingingWaiter : public Singer, public Waiter {
protected:
	void data() const;
	void get();
public:
	SingingWaiter() {};
	SingingWaiter(const Worker& wk, int p = 0, int v = other) :Worker(wk), Singer(wk, p), Waiter(wk, v) {}
	SingingWaiter(const Waiter& wt, int v = other) :Worker(wt), Singer(wt, v), Waiter(wt) {}
	SingingWaiter(const Singer& wt, int p = 0) :Worker(wt), Singer(wt), Waiter(wt, p) {}
	virtual void set();
	virtual void show() const;
};