#include<iostream>
#include<list>
using namespace std;
#include<algorithm>

void myPrint(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2)
{
	//���� ��һ����>�ڶ�����
	return v1 > v2;
}

void test01()
{
	list<int> l1;
	l1.push_back(20);
	l1.push_back(40);
	l1.push_back(10);
	l1.push_back(30);
	cout << "��תǰ�Ĵ�ӡ��" << endl;
	myPrint(l1);
	cout << "��ת��Ĵ�ӡ��" << endl;
	l1.reverse();
	myPrint(l1);

	//���в�֧��������ʵĵ����������� ������ʹ�ñ�׼���㷨 ���磺sort����
	//��֧��������ʵĵ������������ڲ����ṩ�㷨
	cout << "�����Ĵ�ӡ��" << endl;
	//sort(l1.begin(), l1.end());
	l1.sort();//Ĭ��������򣺴�С����-����
	myPrint(l1);
	l1.sort(myCompare);//����
	myPrint(l1);
}

int main()
{
	test01();
	system("pause");
}