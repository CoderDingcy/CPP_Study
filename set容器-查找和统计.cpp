#include<iostream>
#include<set>
using namespace std;

//set�����Ĳ��Һ�ͳ��
void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

//����
void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	myPrint(s1);

	set<int>::iterator it = s1.find(40);//find�������ص��ǵ�������λ��
	if (it != s1.end())
		cout << "�ҵ�Ԫ��" <<*it<< endl;
	else
		cout << "δ�ҵ�" << endl;

}

//ͳ��
void test02()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(10);
	s1.insert(10);
	s1.insert(10);
	s1.insert(20);
	s1.insert(20);
	s1.insert(20);
	//����set���� ͳ�ƽ��Ҫô��0Ҫô��1 ��Ϊ��ȥ��
	cout << "s1�е�20�ĸ���Ϊ" << s1.count(30) << endl;
}

int main()
{
	test02();
	system("pause");
}