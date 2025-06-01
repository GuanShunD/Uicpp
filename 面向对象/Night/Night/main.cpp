#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

// 专门处理int的加法函数
int Add(int left, int right)
{
	cout << "专门处理int" << endl;
	return left + right;
}

// 通用加法函数
template<class T>
T Add(const T& left, const T& right)
{
	cout << "通用" << endl;
	return left + right;
}

int main() {
	int a1 = 10, a2 = 20;
	double d1 = 16.2, d2 = 22.5;
	cout << Add(a1, a2) << endl;
	cout << endl;
	cout << Add(d1, d2) << endl;

	return 0;
}



//template<typename T>
//void Swap(T& left, T& right) {
//	T temp = left;
//	left = right;
//	right = temp;
//}
//int main() {
//	int x = 1, y = 2;
//	Swap(x, y);
//	cout << x << " " << y << endl;
//	double xx = 1.1, yy = 2.2;
//	Swap(xx, yy);
//	cout << xx << " " << yy <<endl;
//	return 0;
//}



//int main() {
//	// 动态申请一个int类型的空间
//	int* ptr4 = new int;
//
//	// 动态申请一个int类型的空间并初始化为10
//	int* ptr5 = new int(10);
//
//	// 动态申请10个int类型的空间
//	int* ptr6 = new int[3];
//
//	delete ptr4;
//	delete ptr5;
//	delete[] ptr6;
//
//	return 0;
//}