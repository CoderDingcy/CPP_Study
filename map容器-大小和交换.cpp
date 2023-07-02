#include<iostream>
#include<map>
using namespace std;

//map���� ��С�ͽ���
void myPrint(map<int,int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << " value:" << it->second << endl;
}

//��С
void test01()
{
	//��������
	map<int, int> m;
	m.insert(pair<int,int>(1, 23));
	m.insert(pair<int,int>(5, 24));
	m.insert(pair<int,int>(3, 25));
	m.insert(pair<int,int>(4, 26));
	if (m.empty())
		cout << "����mΪ��" << endl;
	else
	{
		cout << "����m��Ϊ�գ���СΪ" << m.size() << endl;
		cout << "����m����Ϊ��" << endl;
		myPrint(m);
	}
	
}

//����
void test02()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 23));
	m1.insert(pair<int, int>(5, 24));
	m1.insert(pair<int, int>(3, 25));
	m1.insert(pair<int, int>(4, 26));
	
	map<int, int> m2;
	m2.insert(pair<int, int>(32, 23));
	m2.insert(pair<int, int>(22, 24));
	m2.insert(pair<int, int>(333, 25));
	m2.insert(pair<int, int>(4443, 26));
	cout << "����ǰ��" << endl;
	myPrint(m1);
	cout << endl;
	myPrint(m2);
	m1.swap(m2);
	cout << "������" << endl;
	myPrint(m1);
	cout << endl;
	myPrint(m2);
}

int main()
{
	test02();
	system("pause");
}