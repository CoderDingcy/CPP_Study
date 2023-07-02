#include<iostream>
#include<map>
using namespace std;

//map���� ����͸�ֵ
void myPrint(map<int,int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << " value:" << it->second << endl;
}

void test01()
{
	//��������
	map<int, int> m;
	m.insert(pair<int,int>(1, 23));
	m.insert(pair<int,int>(5, 24));
	m.insert(pair<int,int>(3, 25));
	m.insert(pair<int,int>(4, 26));
	myPrint(m);
	cout << endl;

	//��������
	map<int, int> mp(m);
	myPrint(mp);

	//��ֵ
	cout << endl;
	map<int, int> mp1 = mp;
	myPrint(mp1);
}

int main()
{
	test01();
	system("pause");
}