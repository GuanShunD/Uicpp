#pragma once
#include<iostream>
using namespace std;
class Date{
public:
	// 获取某年某月的天数
	int GetMonthDay(int year, int month) {
		static int MonthDayArray[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) {
			return 29;
		}
		return MonthDayArray[month];
	}

	void print() {
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	// 全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1);

	// 拷贝构造函数
  // d2(d1) 
	Date(const Date& d);

	// 赋值运算符重载
  // d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d);

	// 析构函数
	~Date();

	// 日期+=天数
	Date& operator+=(int day);

	// 日期+天数
	Date operator+(int day);

	// 日期-天数
	Date operator-(int day);

	// 日期-=天数
	Date& operator-=(int day);

	// 前置++
	Date& operator++();

	// 后置++
	Date operator++(int);

	// 后置--
	Date operator--(int);
	 
	// 前置--
	Date& operator--();

	// >运算符重载
	bool operator>(const Date& d);

	// ==运算符重载
	bool operator==(const Date& d);

	// >=运算符重载
	bool operator >= (const Date& d);

	// <运算符重载
	bool operator < (const Date& d);

	// <=运算符重载
	bool operator <= (const Date& d);

	// !=运算符重载
	bool operator != (const Date& d);

	// 日期-日期 返回天数
	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};
