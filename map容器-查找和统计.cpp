#include<iostream>
#include<map>
using namespace std;

//map���� ���Һ�ͳ��
void myPrint(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << "\tvalue:" << it->second << endl;
}


void test01()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 23));
	m.insert(pair<int, int>(5, 24));
	m.insert(pair<int, int>(3, 25));
	m.insert(pair<int, int>(4, 26));
	//����
	map<int, int>::iterator pos = m.find(5);
	if (pos != m.end())
	{
		cout << "�ҵ���" << endl;
		cout << "key=" << pos->first << "\tvalue=" << pos->second << endl;
	}
	else
		cout << "δ�ҵ�Ԫ��" << endl;

	//ͳ��
	//��Ϊmap����ȥ�� ���Խ������0����1
	//multimap������ܴ���1
	int num = 0;
	num = m.count(3);
	cout << "num=" << num << endl;
}

int main()
{
	test01();
	system("pause");
}