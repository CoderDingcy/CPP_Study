#include<iostream>
#include<list>
using namespace std;

void myPrint(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	list<int> l1;
	//β��
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(20);
	l1.push_back(30);
	//ͷ��
	l1.push_front(100);
	l1.push_front(200);
	l1.push_front(300);
	myPrint(l1);
	//list����ʹ��[]��at���������ݴ�ȡ ��Ϊlist��Ԫ�ز������������ķ�ʽ���д洢 �������ǲ�֧��������ʵ�

	cout << "��һ��Ԫ�أ�" << l1.front()<<endl;
	cout << "���һ��Ԫ�أ�" << l1.back()<<endl;

	//��֤������
	list<int>::iterator it = l1.begin();
	it++;//֧��˫�����
	it--;

	//it = it + 1;//�����ᱨ�� ��֧���������

}

int main()
{
	test01();
	system("pause");
}