#include<iostream>
using namespace std;
#include<vector>

//vector��������

void myPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}

//1������ʹ��
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);
	cout << "����ǰ��";
	myPrint(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
		v2.push_back(i);
	myPrint(v2);

	//������
	v1.swap(v2);
	cout << "������";
	myPrint(v1);
	myPrint(v2);
}

//2��ʵ����;
//����swap���������ڴ�ռ�
void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
		v.push_back(i);
	cout << "����������Ϊ��" << v.capacity()<<endl;
	cout << "�����Ĵ�СΪ��" << v.size()<<endl;

	v.resize(3);//����ָ����С
	cout << "����������Ϊ��" << v.capacity() << endl;
	cout << "�����Ĵ�СΪ��" << v.size() << endl;

	//����swap�����ڴ�
	vector<int>(v).swap(v);
	//vector<int>(v)���ȸ������������ٵ��ÿ������캯����v��������ʼ���������� ������ͼ�����p202
	cout << "����������Ϊ��" << v.capacity() << endl;
	cout << "�����Ĵ�СΪ��" << v.size() << endl;
}

int main()
{
	test02();
	/*test01();*/
	system("pause");
}