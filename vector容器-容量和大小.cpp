#include<iostream>
using namespace std;
#include<vector>

void myPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector�����������ʹ�С����
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);
	myPrint(v1);

	if (v1.empty())
		cout << "����Ϊ��" << endl;
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "����������Ϊ��" << v1.capacity() << endl;
		cout << "�����Ĵ�СΪ��" << v1.size() << endl;
	}
	
	//����ָ����С
	v1.resize(15,100);//�������ָ�����ȱ�ԭ�����������Ĭ��ֵ������0����µ�λ��
	//�������ذ汾����ָ��Ĭ�����ֵ��������2
	myPrint(v1);

	v1.resize(5);//�������ָ���ı�ԭ���̣��������ֻ�ɾ����
	myPrint(v1);
}
int main()
{
	test01();
	system("pause");
}