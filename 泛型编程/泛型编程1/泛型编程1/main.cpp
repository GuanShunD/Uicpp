#define CRT_SECURE_NO_WARNING 1
#include<iostream>
#include<string>
using namespace std;

template<class NameType,class HpType>
class Hero {
public:
	Hero(NameType name, HpType hp) {
		this->m_name = name;
		this->m_hp = hp;
	}
private:
	NameType m_name;
	HpType m_hp;
};

//1、直接指定类型
void test1(Hero<string, double>& h) {

}

//2、参数模版化
template<typename T1,typename T2>
void test2(Hero<T1,T2>& h) {

}

//3、类模板化
template<typename T>
void test3(T& h) {

}
int main() {
	Hero<string, double> h("宋江", 100.0);
	test1(h);
	test2(h);
	test3(h);

	return 0;
}



//class Player {
//public:
//	void run() {
//		cout << "跑步" << endl;
//	}
//};
//
//class Ball {
//public:
//	void drop() {
//		cout << "下落" << endl;
//	}
//};
//
//template<class T>
//class Test {
//	T obj;
//public:
//	void movel() {
//		obj.run();
//	}
//	void move2() {
//		obj.drop();
//	}
//};
//int main() {
//	Test<Player>test1;
//	test1.movel();
//	//test1.move2();
//	
//	Test<Ball>test2;
//	//test2.movel();
//	test2.move2();
//	return 0;
//}






//template<class T>
//class DYnamicArray {
//private:
//	T* elements;
//	int size;
//public:
//	DYnamicArray(int n); /*:size(n) {
//		elements = new T[n];
//	}*/
//	~DYnamicArray(); /*{
//		delete[] elements;
//	}*/
//	T& operator[](int index); /*{
//		return elements[index];
//	}*/
//	//更新第index个索引的元素，把它的值改成value
//	void update(int index, T value); /*{
//		elements[index] = value;
//	}*/
//};
//
//template<class T>
//DYnamicArray<T>::DYnamicArray(int n) :size(n) {
//	elements = new T[n];
//}
//
//template<class T>
//DYnamicArray<T>::~DYnamicArray(){
//	delete[] elements;
//}
//
//template<class T>
//T& DYnamicArray<T>::operator[](int index){
//	return elements[index];
//}
//template<class T>
//void DYnamicArray<T>::update(int index, T value) {
//	elements[index] = value;
//}
//int main() {
//	//int n = 10;
//	//int a[n];
//	//int* p = new int[n];
//
//	/*DYnamicArray<double> da(100);
//	da[1] = 3.1;
//	da[9] = 4.2;
//	cout << da[1] << " " << da[9] << endl;*/
//
//	/*DYnamicArray<char> dac(10);
//	dac[0] = 'A';
//	dac[1] = 'C';
//	dac[2] = 'M';
//	cout << dac[0] << dac[1] << dac[2] << endl;*/
//
//	DYnamicArray<char> dac(100);
//	dac[56] = 'h';
//	dac.update(56, 'u');
//	cout << dac[56] << endl;
//	return 0;
//}







//template<typename T2, typename T3>
//T2 add(T2 a, T3 b) {
//	cout << typeid(T2).name() << endl;
//	cout << typeid(T3).name() << endl;
//	T2 c = a + b;
//	return c;
//}
///*
//1、函数模版支持多个类型参数
//2、一旦有类型不能推导，就会导致编译失败
//3、返回值类型无法作为推导依据
//*/
//int main() {
//	double r = add(4.0f, 8881281881);
//	cout << r << endl;
//	return 0;
//}






//int add(int a, int b) {
//	cout << "调用普通函数" << endl;
//	return a + b;
//}
//template<typename T>
//T add(T a, T b) {
//	cout << "调用模版函数" << endl;
//	return a + b;
//}
////如果普通函数和模版函数都可以调用时，优先调用普通函数
//int main() {
//	int a = 1, b = 2;
//	cout << add(a, b) << endl;
//
//	//都可以调用时调用模板
//	cout << add<int>(a, b) << endl;
//	cout << add<>(a, b) << endl;
//
//	//优先调用符合匹配的
//	double aa = 1, bb = 2;
//	cout << add(aa, bb) << endl;
//	return 0;
//}





////函数模版
///*
//template<typename T>
//函数的定义
//*/
//
//int addInt(int a, int b) {
//	int c = a + b;
//	return c;
//}
//
//double addDouble(double a, double b) {
//	double c = a + b;
//	return c;
//}
//
//template<typename T>
//T add(T a, T b) {
//	T c = a + b;
//	return c;
//}
////当实参与形参不匹配时会发生隐式类型转换
////当模版自动类型推导，无法进行 隐式类型转换
//int main() {
//	int a = 1,b = 2;
//	double aa = 1.1, bb = 1.91;
//	cout << add(a, b) << endl;//3
//	cout << add(aa, bb) << endl;//3.01
//
//	//显示指定类型
//	cout << add<int>(a, b) << endl;//3
//	cout << add<double>(aa, bb) << endl;//3.01
//
//	//函数模版的显示指定类型调用时的隐式类型转换
//	int c = add<int>(a, aa);
//	cout << c << endl;
//	return 0;
//}