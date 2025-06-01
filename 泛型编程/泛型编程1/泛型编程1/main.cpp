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

//1��ֱ��ָ������
void test1(Hero<string, double>& h) {

}

//2������ģ�滯
template<typename T1,typename T2>
void test2(Hero<T1,T2>& h) {

}

//3����ģ�廯
template<typename T>
void test3(T& h) {

}
int main() {
	Hero<string, double> h("�ν�", 100.0);
	test1(h);
	test2(h);
	test3(h);

	return 0;
}



//class Player {
//public:
//	void run() {
//		cout << "�ܲ�" << endl;
//	}
//};
//
//class Ball {
//public:
//	void drop() {
//		cout << "����" << endl;
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
//	//���µ�index��������Ԫ�أ�������ֵ�ĳ�value
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
//1������ģ��֧�ֶ�����Ͳ���
//2��һ�������Ͳ����Ƶ����ͻᵼ�±���ʧ��
//3������ֵ�����޷���Ϊ�Ƶ�����
//*/
//int main() {
//	double r = add(4.0f, 8881281881);
//	cout << r << endl;
//	return 0;
//}






//int add(int a, int b) {
//	cout << "������ͨ����" << endl;
//	return a + b;
//}
//template<typename T>
//T add(T a, T b) {
//	cout << "����ģ�溯��" << endl;
//	return a + b;
//}
////�����ͨ������ģ�溯�������Ե���ʱ�����ȵ�����ͨ����
//int main() {
//	int a = 1, b = 2;
//	cout << add(a, b) << endl;
//
//	//�����Ե���ʱ����ģ��
//	cout << add<int>(a, b) << endl;
//	cout << add<>(a, b) << endl;
//
//	//���ȵ��÷���ƥ���
//	double aa = 1, bb = 2;
//	cout << add(aa, bb) << endl;
//	return 0;
//}





////����ģ��
///*
//template<typename T>
//�����Ķ���
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
////��ʵ�����ββ�ƥ��ʱ�ᷢ����ʽ����ת��
////��ģ���Զ������Ƶ����޷����� ��ʽ����ת��
//int main() {
//	int a = 1,b = 2;
//	double aa = 1.1, bb = 1.91;
//	cout << add(a, b) << endl;//3
//	cout << add(aa, bb) << endl;//3.01
//
//	//��ʾָ������
//	cout << add<int>(a, b) << endl;//3
//	cout << add<double>(aa, bb) << endl;//3.01
//
//	//����ģ�����ʾָ�����͵���ʱ����ʽ����ת��
//	int c = add<int>(a, aa);
//	cout << c << endl;
//	return 0;
//}