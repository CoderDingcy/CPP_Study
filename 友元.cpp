#include<iostream>
using namespace std;
#include<string>
//ȫ�ֺ�������Ԫ
//class building
//{//����Ϊ��ĺ����ѣ����Է������˽�г�Ա
//	friend void goodgay(building* building);
//public:
//	building()
//	{
//		m_bedroom = "����";
//		m_sittingroom = "����";
//	}
//
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
////ȫ�ֺ���
//void goodgay(building* building)
//{
//	//cout << "��ĺû������ڷ������" << building->m_sittingroom << endl;
//	cout << "��ĺû������ڷ������" << building->m_bedroom << endl;
//}

//������Ԫ
//class Building
//{
//	friend class Goodgay;//Goodgay�Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա���ԣ�
//public:
//	Building();
//	string m_sitting;
//private:
//	string m_bedroom;
//};
//Building::Building()
//{
//	m_sitting = "�����";
//	m_bedroom = "����";
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
//	cout << "�û������ڲι����" << building->m_sitting << endl;
//	cout << "�û������ڲι����" << building->m_bedroom<< endl;
//}
//void test01()
//{
//	Goodgay g;
//	g.visit();
//}
//��Ա��������Ԫ
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
	m_sittingroom = "�����";
	m_bedroom = "����";
}
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit()
{
	cout << "�û������ڲι����" << building->m_sittingroom << endl;
	cout << "�û������ڲι����" << building->m_bedroom << endl;
}
void Goodgay::visit2()
{
	cout << "�û������ڲι����" << building->m_sittingroom << endl;
	cout << "�û������ڲι����" << building->m_bedroom << endl;
}



int main()
{
	Goodgay g;
	g.visit();
	g.visit2();
	system("pause");
}