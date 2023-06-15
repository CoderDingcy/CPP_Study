#include<iostream>
using namespace std;
#include<string>
//全局函数作友元
//class building
//{//函数为类的好朋友，可以访问类的私有成员
//	friend void goodgay(building* building);
//public:
//	building()
//	{
//		m_bedroom = "卧室";
//		m_sittingroom = "客厅";
//	}
//
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
////全局函数
//void goodgay(building* building)
//{
//	//cout << "你的好基友正在访问你的" << building->m_sittingroom << endl;
//	cout << "你的好基友正在访问你的" << building->m_bedroom << endl;
//}

//类作友元
//class Building
//{
//	friend class Goodgay;//Goodgay是本类的好朋友，可以访问本类中的私有成员属性；
//public:
//	Building();
//	string m_sitting;
//private:
//	string m_bedroom;
//};
//Building::Building()
//{
//	m_sitting = "起居室";
//	m_bedroom = "卧室";
//}
//class Goodgay
//{
//public:
//	Goodgay();
//	void visit();
//private:
//	Building* building;
//};
//Goodgay::Goodgay()
//{
//	building = new Building;
//}
//void Goodgay::visit()
//{
//	cout << "好基友正在参观你的" << building->m_sitting << endl;
//	cout << "好基友正在参观你的" << building->m_bedroom<< endl;
//}
//void test01()
//{
//	Goodgay g;
//	g.visit();
//}
//成员函数作友元
class Building;
class Goodgay
{
public:
	Goodgay();
	void visit();
	void visit2();
private:
	Building* building;
};
class Building
{
	friend void Goodgay::visit();
	friend void Goodgay::visit2();
public:
	Building();
	string m_sittingroom;
private:
	string m_bedroom;

};
Building::Building()
{
	m_sittingroom = "起居室";
	m_bedroom = "卧室";
}
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit()
{
	cout << "好基友正在参观你的" << building->m_sittingroom << endl;
	cout << "好基友正在参观你的" << building->m_bedroom << endl;
}
void Goodgay::visit2()
{
	cout << "好基友正在参观你的" << building->m_sittingroom << endl;
	cout << "好基友正在参观你的" << building->m_bedroom << endl;
}



int main()
{
	Goodgay g;
	g.visit();
	g.visit2();
	system("pause");
}