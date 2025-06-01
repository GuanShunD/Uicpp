#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//string getHex(int x)
//{
//	char buff[10];
//	sprintf_s(buff, "%X", (x & 0xFFFF));
//	return (string)buff;
//}
//int main()
//{
//	int a[3][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (j)
//			{
//				cout << ",";
//			}
//			int* p = &a[i][j];
//			cout << getHex((int)p);
//		}
//		cout << endl;
//	}
//	return 0;
//}


#include<iostream>
using namespace std;

struct Point {
	double x, y;
};

struct Rect {
	Point lt;
	Point rd;
};
Rect r1, r2;
int main()
{
	while (cin >> r1.lt.x >> r1.lt.y >> r1.rd.x >> r1.rd.y)
	{

	}
	return 0;
}