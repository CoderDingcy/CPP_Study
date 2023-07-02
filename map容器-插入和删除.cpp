#include<iostream>
#include<map>
using namespace std;

//map���� �����ɾ��
void myPrint(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << "\tvalue:" << it->second << endl;
}


void test01()
{
	map<int, int> m;
	//����
	//��һ��
	m.insert(pair<int, int>(1, 23));
	m.insert(pair<int, int>(5, 24));
	m.insert(pair<int, int>(3, 25));
	m.insert(pair<int, int>(4, 26));
	
    //�ڶ���
	m.insert(make_pair(10, 10));

	//������
	m.insert(map<int, int>::value_type(100, 100));

	//������ ������ʹ��
	m[4] = 400;
	//m[5]; ��ʹ������û��key=5 �������������Լ�����key=5 ����ʹ���Ӧ��value=0



	//ɾ��
	m.erase(m.begin());
	//m.erase(m.begin(), m.end());
	m.erase(3);
	m.clear();
	myPrint(m);
}

int main()
{
	test01();
	system("pause");
}