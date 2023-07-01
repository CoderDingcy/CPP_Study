#include<iostream>
#include<set>
using namespace std;

//set�����ĸ�ֵ�빹��

void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	//set����ֻ��insert����
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40); 

	//��������
	//set�����ص㣺���Զ�������Ԫ������ ȥ��
	myPrint(s1);

	//��������
	set<int>s2(s1);
	myPrint(s2);

	//��ֵ
	set<int>s3 = s2;
	myPrint(s3);


}

int main()
{
	test01();
	system("pause");
}