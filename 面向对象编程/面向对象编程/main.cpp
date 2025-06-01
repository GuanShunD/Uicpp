#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
静态成员变量的特点：
1、所有的对象共享同一份数据
2、编译阶段分配内存
3、需要在类中进行声明，在类外进行初始化
*/
class Hero {
public:
	Hero() {
		m_Name = "曾智";
		m_Hp = 100;
	}

	~Hero() {

	}
	//声明
	static int m_HeroCount;

private:
	string m_Name;
	int m_Hp;
};
//初始化
int Hero::m_HeroCount = 100;
int main() {
	Hero h;
	cout << h.m_HeroCount << endl;
	h.m_HeroCount = 101;
	cout << Hero::m_HeroCount << endl;

	cout << &(h.m_HeroCount) << endl;
	cout << &(Hero::m_HeroCount) << endl;
	return 0;
}


//初始化列表的语法
//
//构造函数():成员变量(传参),成员变量(传参),成员变量(传参){}
//*/
//class Hero {
//public:
//	/*Hero(string name, int hp) {
//		m_Name = name;
//		m_Hp = hp;
//	}*/
//	/*Hero(string name, int hp): m_Name("monkey"),m_Hp(50) {
//
//	}*/
//	Hero(string name, int hp) : m_Name(name), m_Hp(hp) {
//
//	}
//	void print() {
//		cout << "hero:" << m_Name << "的血量是" << m_Hp << endl;
//	}
//private:
//	string m_Name;
//	int m_Hp;
//};
//int main() {
//	Hero h("曾智", 100);
//	h.print();
//	return 0;
//}


//拷贝构造函数的定义
//类名(const 类型& 变量名)
//*/
//class Hero {
//public:
//	//默认构造函数
//	Hero() {
//		m_Hp = 100;
//		cout << "Hero的默认构造" << endl;
//	}
//
//	Hero(int hp) {
//		m_Hp = hp;
//		cout << "Hero的有参构造" << endl;
//	}
//	//拷贝构造
//	Hero(const Hero& h) {
//		m_Hp = h.m_Hp;
//		cout << "Hero的拷贝构造" << endl;
//	}
//
//	~Hero() {
//		cout << "Hero的默认析构" << endl;
//	}
//private:
//	int m_Hp;
//};
//拷贝构造函数调用的时机
//1、用已经创建的对象来初始化对象
//2、函数的传参
//3、函数的返回值
//*/
//
////1、用已经创建的对象来初始化对象
//void func1() {
//	cout << "---------func1---------" << endl;
//	Hero h1(20);
//	Hero h2(h1);
//}
//
//void text1(Hero h) {
//
//}
////2、函数的传参
//void func2() {
//	cout << "---------func2---------" << endl;
//	Hero h1;
//	text1(h1);
//}
//int main() {
//	func1();
//	func2();
//	return 0;
//}


//
//析构函数
//1、函数名和类名一致，并且在最前面加上一个"~"波浪号
//2、函数返回值不需要写
//3、不能有参数
//
//class Hero {
//public:
//	//构造函数
//	Hero() {
//		cout << "Hero的默认构造" << endl;
//	}
//	//析构函数
//	~Hero() {
//		cout << "Hero的默认析构" << endl;
//	}
//};
//int main() {
//	Hero h;
//
//	return 0;
//}


//构造函数
//1、函数名称和类名保持一致
//2、返回值类型不需要写
//3、构造函数可以有参数
//
//class Hero {
//public:
//	//构造函数
//	Hero() {
//		m_Name = "";
//		m_SkillCount = 4;
//		m_Speed = 100;
//		cout << "默认构造函数" << endl;
//	}
//	//有参构造1
//	Hero(string name) {
//		m_Name = name;
//		m_SkillCount = 4;
//		m_Speed = 100;
//		cout << "有参构造函数1" << endl;
//	}
//	//有参构造2
//	Hero(string name,int SkillCount) {
//		m_Name = name;
//		m_SkillCount = SkillCount;
//		m_Speed = 100;
//		cout << "有参构造函数2" << endl;
//	}
//private:
//	string m_Name;
//	int    m_SkillCount;
//	int    m_Speed;
//};
//int main() {
//	Hero h1;
//	Hero h2("曾智");
//	Hero h3();//函数声明，并不是对象化的实例化：如 int main()
//	Hero h4{};
//	Hero h5 = Hero("曾智");
//	Hero h6{ "曾智",6 };
//	return 0;
//}


//class Hero {
//public:
//	void SetName(string name) {
//		m_Name = name;
//	}
//	string GetName() {
//		return m_Name;
//	}
//
//	int GetSkillCount() {
//		return m_SkillCount;
//	}
//
//	void setSpeed(int speed) {
//		m_Speed = speed;
//	}
//private:
//	string m_Name;             //可读，可写
//	int    m_SkillCount = 4;   //只读
//	int    m_Speed;            //只写
//};
//int main() {
//	Hero h;
//	h.SetName("曾智");
//	cout << "男同的名字叫：" << h.GetName() << endl;
//	cout << "男同的年龄是：" << h.GetSkillCount() << endl;
//	h.setSpeed(20);
//	return 0;
//}


//struct 默认是公共的  
//
//class  默认是私有的
//
//
//int main() {
//
//	return 0;
//}


//访问权限
//公共权限   public       类内可以访问，类外也可以访问
//保护权限   protected    类内可以访问，类外不可以访问  子类可以访问
//私有权限   private      类内可以访问，类外不可以访问  子类不可以访问
//
//B->A
//A 父类，基类
//B 子类，派生类
//
//
//class People {
//	//公有权限
//public:
//	int m_Id;
//	void Work() {//类内可以访问
//		m_Id = 1;
//		m_HouseId = 2;
//		m_PayPass = 1314;
//	}
//	//保护权限
//protected:
//	int m_HouseId;
//
//	//私有权限
//private:
//	int m_PayPass;
//};
//
//class Son : public People {
//	void func() {
//		m_Id = 1;         //公有可以
//		m_HouseId = 4;    //受保护，子类可以
//		//m_PayPass = 123;//私有不可以
//	}
//};
//int main() {
//	People p;
//	p.m_Id = 1;//公有，类外可以问
//	p.Work();
//	return 0;
//}


//封装
//class 类名{
//访问权限:
//     属性(成员变量)
//	 行为(成员函数) 
//};
//class Hero {
//	//访问权限 pubilc protected private
//public:
//	//属性
//	int m_Id;
//	int m_Hp;
//
//	//行为
//	void addHp(int hp) {
//		m_Hp += hp;
//	}
//	void subHp(int hp) {
//		m_Hp -= hp;
//	}
//};
//int main()
//{
//	Hero h;
//	//访问对象属性
//	h.m_Id = 5;
//	h.m_Hp= 100;
//	h.addHp(100);
//	cout << "Id为" << h.m_Id << "的英雄，血量是" << h.m_Hp << endl;
//	return 0;
//}