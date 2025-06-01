#define _CRT_CECURE_NO_WARNINGS 1
#include"Date.h"

void TestDate1() {
	Date d1(2025, 4, 28);
	Date d2 = d1 + 1;
	d1 += 5;

	
	d1.print();
	d2.print();
	cout << endl;
}

void TestDate2() {
	Date d3(2025, 4, 28);
	Date d4 = d3 - 1;
	d3 -= 5;

	d3.print();
	d4.print();
	cout << endl;
}

void TestDate3() {
	Date d5(2025, 4, 28);
	Date d6(2025, 4, 29);
	Date d7(2025, 5, 28);
	
	cout << (d5 > d6) << endl;
	cout << (d5 >= d6) << endl;
	cout << (d5 == d6) << endl;

	cout << (d5 < d7) << endl;
	cout << (d5 <= d7) << endl;
	cout << (d5 == d7) << endl;
}

void TestDate4() {
	Date d8(2025, 4, 28);
	Date d9(2026, 3, 1);
	
	cout << d8 - d9 << endl;
}
int main() {
	TestDate1();
	TestDate2();
	TestDate3();
	TestDate4();

	return 0;
}