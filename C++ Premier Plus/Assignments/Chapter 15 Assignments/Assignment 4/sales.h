#pragma once
#include <exception>
#include <string>
#include <stdexcept>

class Sales {
public:
	enum { MONTHS = 12 };
	class Bad_Index : public std::logic_error {
	private:
		int bi;
	public:
		explicit Bad_Index(int i, const std::string& s = "Index error in Sales object.\n");
		int bi_val() const { return bi; }
		virtual ~Bad_Index() noexcept {}
	};
	explicit Sales(int i);
	Sales(int i, const double* gr, int n);
	int Year() const { return year; }
	virtual double operator[](int i) const;
	virtual double& operator[](int i);
	virtual ~Sales() {}
private:
	double gross[MONTHS];
	int year;
};

class LabeledSales :public Sales {
private:
	std::string label;
public:
	class nbad_index :public Sales::Bad_Index {
	private:
		std::string lbl;
	public:
		nbad_index(const std::string& s, int i, const std::string& bs = "Index error in LabeledSales object.\n");
		const std::string label_val() const { return lbl; }
		virtual ~nbad_index() noexcept {}
	};
	explicit LabeledSales(const std::string s = "none", int y = 0);
	LabeledSales(const std::string s, int y, const double* gr, int n);
	virtual ~LabeledSales() {}
	const std::string Label() const { return label; }
	virtual double operator[](int i) const;
	virtual double& operator[](int i);
};