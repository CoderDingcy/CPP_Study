#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�

void myPrint(const deque<int> d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
		cout << *it<<" ";
	cout << endl;
}

void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	myPrint(d);
	//���� Ĭ���������Ϊ����
	//֧��������ʵĵ�������������������sort����
	//���� vector
	sort(d.begin(), d.end());
	cout << "�����";
	myPrint(d);

}

int main()
{
	test01();
	system("pause");
}