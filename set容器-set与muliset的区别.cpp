#include<iostream>
#include<set>
using namespace std;

//set���� multiset��������
void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	set<int> s1;
	//����ʹ�ö��������ղ���Ľ��
	pair<set<int>::iterator,bool> ret=s1.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}
	myPrint(s1);

	multiset<int> ms;
	//multiset������������ظ���ֵ
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}