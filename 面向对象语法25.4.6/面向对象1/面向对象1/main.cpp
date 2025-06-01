#define _CRT_SECURE_NO_WARNING 1
#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
	virtual void eat() {
		cout << "����Զ���" << endl;
	}
};

class Cat:public Animal {
public:
	 void eat() {
		cout << "è�Զ���" << endl;
	}
};

void  eat(Animal& a) {
	a.eat();
}

void test() {
	Cat c;
	eat(c);
}
int main() {
	test();
	return 0;
}




//class Animal {
//public:
//	int m_pub;
//protected:
//	int m_pro;
//private:
//	int m_pri;
//};
//
//class Cat :public Animal {
//public:
//	Cat() {
//		m_pub = 1;
//		m_pro = 2;
//		//m_pri = 3;����˽�г�Ա�����๫�м̳У��޷�����
//	}
//};
//
//class BossCat :public Cat {
//public:
//	BossCat() {
//		m_pro = 2;//���ౣ����Ա�����໹�Ǳ�����Ա
//	}
//};
//
//void testCat() {
//	Cat c;
//	c.m_pub = 1;
//	//c.pro = 2;������Ա
//}
//
//class Dog :protected Animal {
//public:
//	Dog() {
//		m_pub = 1;
//		m_pro = 2;
//		//m_pri = 3;//����˽�г�Ա�����ౣ���̳У��޷�����
//	}
//};
//
//void testDog() {
//
//}
//int main() {
//
//	return 0;
//}



//class Point {
//public:
//	Point(int x,int y):m_x(x),m_y(y){
//	
//	}
//	bool operator==(const Point& other) const{
//		return m_x == other.m_x && m_y == other.m_y;
//	}
//
//	bool operator<(const Point & other) const {
//		int d = m_x * m_x + m_y * m_y;
//		int otherd = other.m_x * other.m_x + other.m_y * other.m_y;
//		return d < otherd;
//	}
//	/*bool operator>(const Point& other) const {
//		int d = m_x * m_x + m_y * m_y;
//		int otherd = other.m_x * other.m_x + other.m_y * other.m_y;
//		return d > otherd;
//	}*/
//	bool operator>(const Point& other) const {
//		if (*this == other) {
//			return false;
//		}
//		if (*this < other) {
//			return false;
//		}
//		return true;
//	}
//private:
//	int m_x;
//	int m_y;
//};
//int main() {
//	Point a(1, 6);
//	Point b(2, 5);
//	if (a == b) {
//		cout << "a��b���" << endl;
//	}
//	else if (a < b) {
//		cout << "a��b���ӽ�Բ��" << endl;
//	}
//	else {
//		cout << "b��a���ӽ�Բ��" << endl;
//	}
//	return 0;
//}



//class Hero {
//public:
//	Hero() :m_Date(NULL) {}
//	Hero(int data) {
//		m_Date = new int;
//		*m_Date = data;
//	}
//	~Hero() {
//		if (m_Date) {
//			delete m_Date;
//			m_Date = NULL;
//		}
//	}
//	Hero& operator=(Hero& h) {
//		if (m_Date) {
//			delete m_Date;
//			m_Date = NULL;
//		}
//		m_Date = new int;
//		*m_Date = *h.m_Date;
//		return *this;
//	}
//	int* m_Date;
//};
//int main() {
//	Hero h1(1);
//	Hero h2(2);
//	Hero h3(3);
//	cout << h1.m_Date << endl;
//	cout << h2.m_Date << endl;
//	h1 = h2;//�ڴ�й©
//	cout << endl;
//	cout << h1.m_Date << endl;
//	cout << h2.m_Date << endl;
//
//	h3 = (h2 = h1);
//	return 0;
//}



//
//++
//
//ǰ��++
//����++
//
//
//class Complex {
//	friend ostream& operator<<(ostream& cout, const Complex& a);
//public:
//	Complex():real(0),image(0){}
//	Complex(int real, int image) {
//		this->real = real;
//		this->image = image;
//	}
//
//	Complex& operator++() {
//		this->real += 1;
//		return *this;
//	}
//	Complex operator++(int) {
//		Complex c = *this;
//		this->real += 1;
//		return c;
//	}
//private:
//	int real;
//	int image;
//};
//ostream& operator<<(ostream& cout,const Complex& a) {
//	cout << a.real << '+' << a.image << 'i';
//	return cout;
//}
//
//
//int main() {
//	Complex a(10, 10);
//	cout << a << endl;
//	//++a;
//	cout << ++(++a) << endl;
//	cout << a << endl;
//	cout << endl;
//
//	cout << a++ << endl;
//	cout << a << endl;
//	cout << endl;
//
//	//cout << ((a++)++)++ << endl;������
//	cout << a << endl;
//	return 0;
//}



////������
//class Complex {
//	friend Complex operator+(Complex& a, Complex& b);
//	friend Complex operator-(Complex& a, Complex& b);
//	friend ostream& operator<<(ostream& cout, Complex a);
//public:
//	Complex() :real(0), image(0) {
//
//	}
//	Complex(int real,int image) {
//		this->real = real;
//		this->image = image;
//	}
//	/*Complex add(Complex& other) {
//		Complex ret;
//		ret.real = this->real + other.real;
//		ret.image = this->image + other.image;
//		return ret;
//	}*/
//
//	/*Complex operator+(Complex& other) {
//		Complex ret;
//		ret.real = this->real + other.real;
//		ret.image = this->image + other.image;
//		return ret;
//	}*/
//
//
//	void Print() {
//		cout << real << '+' << image << 'i' << endl;
//	}
//private:
//	int real;
//	int image;
//};
//
//Complex operator+(Complex& a, Complex& b) {
//	Complex ret;
//	ret.real = a.real + b.real;
//	ret.image = a.image + b.image;
//	return ret;
//}
//
//Complex operator-(Complex& a, Complex& b) {
//	Complex ret;
//	ret.real = a.real - b.real;
//	ret.image = a.image - b.image;
//	return ret;
//}
//
//ostream& operator<<(ostream& cout, Complex a) {
//	cout << a.real << '+' << a.image << 'i';
//	return cout;
//}
//int main() {
//	Complex a(10, 20);
//	Complex b(5, 6);
//	//Complex c = a.add(b);
//	Complex c = a + b;
//	Complex d = a - b;
//	c.Print();
//	d.Print();
//	cout << c << endl << endl;
//	
//	return 0;
//}



//
//+
//4+5=9
//class A{
//};
//A a;
//A b;
//a + b;
//
//int main() {
//	//1���ӷ������
//	int a = 520;
//	int b = 1314;
//	cout << a + b << endl;
//
//	//2���ַ���ƴ��
//	string c = "��";
//	string d = "����";
//	cout << c + d << endl;
//	return 0;
//}
