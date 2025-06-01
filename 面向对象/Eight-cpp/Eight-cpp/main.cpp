#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;




//求1+2+3+...+n，要求不能使用乘除法、for、while、
// if、else、switch、case等关键字及条件判断语句（A?B:C）。
//class sum {
//public:
//    sum() {
//        _ret += _i;
//        _i++;
//    }
//
//    static int GetRet() {
//        return _ret;
//    }
//private:
//    static int _i;
//    static int _ret;
//};
//
//int sum::_i = 1;
//int sum::_ret = 0;
//
//class Solution {
//public:
//    int Sum_Solution(int n) {
//        //sum a[n];
//        sum* a = new sum[n];
//        delete[] a;
//        return sum::GetRet();
//    }
//};

//class A
//{
//public:
//	A()
//	{
//		++_scount;
//	}
//	A(const A& t)
//	{
//		++_scount;
//	}
//	~A()
//	{
//		//--_scount;
//	}
//	static int GetACount()
//	{
//		return _scount;
//	}
//private:
//	// 类⾥⾯声明 
//	static int _scount;
//};
//// 类外⾯初始化 
//int A::_scount = 0;
//
//int main() {
//	cout << A::GetACount() << endl;
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//	cout << a1.GetACount() << endl;
//
//	return 0;
//}