#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

/*
��̬��Ա�������ص㣺
1�����еĶ�����ͬһ������
2������׶η����ڴ�
3����Ҫ�����н�����������������г�ʼ��
*/
class Hero {
public:
	Hero() {
		m_Name = "����";
		m_Hp = 100;
	}

	~Hero() {

	}
	//����
	static int m_HeroCount;

private:
	string m_Name;
	int m_Hp;
};
//��ʼ��
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


//��ʼ���б���﷨
//
//���캯��():��Ա����(����),��Ա����(����),��Ա����(����){}
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
//		cout << "hero:" << m_Name << "��Ѫ����" << m_Hp << endl;
//	}
//private:
//	string m_Name;
//	int m_Hp;
//};
//int main() {
//	Hero h("����", 100);
//	h.print();
//	return 0;
//}


//�������캯���Ķ���
//����(const ����& ������)
//*/
//class Hero {
//public:
//	//Ĭ�Ϲ��캯��
//	Hero() {
//		m_Hp = 100;
//		cout << "Hero��Ĭ�Ϲ���" << endl;
//	}
//
//	Hero(int hp) {
//		m_Hp = hp;
//		cout << "Hero���вι���" << endl;
//	}
//	//��������
//	Hero(const Hero& h) {
//		m_Hp = h.m_Hp;
//		cout << "Hero�Ŀ�������" << endl;
//	}
//
//	~Hero() {
//		cout << "Hero��Ĭ������" << endl;
//	}
//private:
//	int m_Hp;
//};
//�������캯�����õ�ʱ��
//1�����Ѿ������Ķ�������ʼ������
//2�������Ĵ���
//3�������ķ���ֵ
//*/
//
////1�����Ѿ������Ķ�������ʼ������
//void func1() {
//	cout << "---------func1---------" << endl;
//	Hero h1(20);
//	Hero h2(h1);
//}
//
//void text1(Hero h) {
//
//}
////2�������Ĵ���
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
//��������
//1��������������һ�£���������ǰ�����һ��"~"���˺�
//2����������ֵ����Ҫд
//3�������в���
//
//class Hero {
//public:
//	//���캯��
//	Hero() {
//		cout << "Hero��Ĭ�Ϲ���" << endl;
//	}
//	//��������
//	~Hero() {
//		cout << "Hero��Ĭ������" << endl;
//	}
//};
//int main() {
//	Hero h;
//
//	return 0;
//}


//���캯��
//1���������ƺ���������һ��
//2������ֵ���Ͳ���Ҫд
//3�����캯�������в���
//
//class Hero {
//public:
//	//���캯��
//	Hero() {
//		m_Name = "";
//		m_SkillCount = 4;
//		m_Speed = 100;
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	//�вι���1
//	Hero(string name) {
//		m_Name = name;
//		m_SkillCount = 4;
//		m_Speed = 100;
//		cout << "�вι��캯��1" << endl;
//	}
//	//�вι���2
//	Hero(string name,int SkillCount) {
//		m_Name = name;
//		m_SkillCount = SkillCount;
//		m_Speed = 100;
//		cout << "�вι��캯��2" << endl;
//	}
//private:
//	string m_Name;
//	int    m_SkillCount;
//	int    m_Speed;
//};
//int main() {
//	Hero h1;
//	Hero h2("����");
//	Hero h3();//���������������Ƕ��󻯵�ʵ�������� int main()
//	Hero h4{};
//	Hero h5 = Hero("����");
//	Hero h6{ "����",6 };
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
//	string m_Name;             //�ɶ�����д
//	int    m_SkillCount = 4;   //ֻ��
//	int    m_Speed;            //ֻд
//};
//int main() {
//	Hero h;
//	h.SetName("����");
//	cout << "��ͬ�����ֽУ�" << h.GetName() << endl;
//	cout << "��ͬ�������ǣ�" << h.GetSkillCount() << endl;
//	h.setSpeed(20);
//	return 0;
//}


//struct Ĭ���ǹ�����  
//
//class  Ĭ����˽�е�
//
//
//int main() {
//
//	return 0;
//}


//����Ȩ��
//����Ȩ��   public       ���ڿ��Է��ʣ�����Ҳ���Է���
//����Ȩ��   protected    ���ڿ��Է��ʣ����ⲻ���Է���  ������Է���
//˽��Ȩ��   private      ���ڿ��Է��ʣ����ⲻ���Է���  ���಻���Է���
//
//B->A
//A ���࣬����
//B ���࣬������
//
//
//class People {
//	//����Ȩ��
//public:
//	int m_Id;
//	void Work() {//���ڿ��Է���
//		m_Id = 1;
//		m_HouseId = 2;
//		m_PayPass = 1314;
//	}
//	//����Ȩ��
//protected:
//	int m_HouseId;
//
//	//˽��Ȩ��
//private:
//	int m_PayPass;
//};
//
//class Son : public People {
//	void func() {
//		m_Id = 1;         //���п���
//		m_HouseId = 4;    //�ܱ������������
//		//m_PayPass = 123;//˽�в�����
//	}
//};
//int main() {
//	People p;
//	p.m_Id = 1;//���У����������
//	p.Work();
//	return 0;
//}


//��װ
//class ����{
//����Ȩ��:
//     ����(��Ա����)
//	 ��Ϊ(��Ա����) 
//};
//class Hero {
//	//����Ȩ�� pubilc protected private
//public:
//	//����
//	int m_Id;
//	int m_Hp;
//
//	//��Ϊ
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
//	//���ʶ�������
//	h.m_Id = 5;
//	h.m_Hp= 100;
//	h.addHp(100);
//	cout << "IdΪ" << h.m_Id << "��Ӣ�ۣ�Ѫ����" << h.m_Hp << endl;
//	return 0;
//}