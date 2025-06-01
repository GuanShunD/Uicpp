#include"Date.h"

Date::Date(int year, int month, int day) {
	_year = year;
	_month = month;
	_day = day;
}

Date::Date(const Date& d) {
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

Date::~Date() {

}

Date& Date::operator+=(int day) {
   if (day < 0) {
	    return *this -= (- day);
   }
	_day += day;
	while (_day > GetMonthDay(_year, _month)) {
		_day -= GetMonthDay(_year, _month);
		//月进位
		++_month;
		if (_month == 13) {
			++_year;
			_month = 1;
		}
	}
	return *this;
}

Date Date::operator+(int day) {
	Date temp(*this);
	temp += day;//调用了上面的operator+=

	return temp;
}



Date& Date::operator=(const Date& d) {
	if (this != &d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	return *this;
}

Date& Date::operator-=(int day) { 
	if (day < 0) {
		return *this += (-day);
	}
	_day -= day;
	while (_day <= 0) {
		--_month;
		if (_month == 0) { 
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator-(int day) {
	Date temp = *this;
	temp -= day;

	return temp;
}

bool Date::operator>(const Date& d) {
	if (_year > d._year) {
		return true;
	}
	else if (_year == d._year && _month > d._month) {
		return true;
	}
	else if (_year == d._year && _month == d._month) {
		return _day > d._day;
	}
	return false;
}

bool Date::operator >= (const Date& d) {
	return *this > d || *this == d;
}

bool Date::operator==(const Date& d) {
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator<(const Date& d) {
	return !(*this >= d);
}

bool Date::operator <= (const Date& d) {
	return !(*this > d);
}

bool Date::operator != (const Date& d) {
	return !(*this == d);
}

Date& Date::operator++() {
	*this += 1;
	return *this;
}

Date Date::operator++(int) {
	Date temp = *this;
	*this += 1;
	return temp;
}

Date Date::operator--(int) {
	Date temp = *this;
	*this -= 1;
	return temp;
}

Date& Date::operator--() {
    *this-= 1;
	return *this;
}

int Date::operator-(const Date& d) {
	int flag = 1;
	Date max = *this;
	Date min = d;
	if (*this < d) {
		max = d;
		min = *this;
		flag = -1;
	}

	int n = 0;
	while (min != max) {
		++min;
		++n;
	}

	return n * flag;
}
