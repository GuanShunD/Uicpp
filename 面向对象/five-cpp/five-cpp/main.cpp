#define CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Date{
public:
	//friend bool operator==(const Date& x1, const Date& x2);
    Date(int year = 1, int month = 1, int day = 1){
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d) {
		cout << "Date(Date& d)" << endl;
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
	}
	void print(){
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	bool operator==( const Date& d) {

		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};

//bool operator==(const Date& x1, const Date& x2) {
//	
//	return x1._year == x2._year 
//		&& x1._month == x2._month
//		&& x1._day == x2._day;
// }

int operator-(const Date& x1, const Date& x2) {

	return 0;
}
int main() {
	Date d1(2025, 4, 24);
	Date d2(2025, 4, 25);

	bool ret1 = d1 == d2;
	cout << ret1 << endl;

	int n = d1 - d2;

	return 0;
}




///////////////////////////////////////////////////////////////////////////////

//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d) {
//		cout << "Date(Date& d)" << endl;
//		this->_year = d._year;
//		this->_month = d._month;
//		this->_day = d._day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main() {
//	Date d1(2025, 4, 23);
//	Date d2(d1);
//	d2.Print();
//	return 0;
//}

