#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour)
		:_hour(hour)
	{
		cout << "Time()" << endl;
	}
private:
	int _hour;
};

class Date
{
public:
	Date(int& x, int year = 1, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
		, _t(12)
		, _ref(x)
		, _n(1)
	{
		// error C2512: ��Time��: û�к��ʵ�Ĭ�Ϲ��캯����? 
		// error C2530 : ��Date::_ref�� : �����ʼ����? 
		// error C2789 : ��Date::_n�� : �����ʼ�������޶����͵Ķ��� 
	}

	void Print() const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
	Time _t; // û��Ĭ�Ϲ��� 
	int& _ref; // ��? 
	const int _n; // const 
};
int main()
{
	int i = 0;
	Date d1(i);
	d1.Print();
	return 0;
}
