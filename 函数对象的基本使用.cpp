#include<iostream>
#include<string>
using namespace std;
//�������� ���º�����
/*
* ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
* �������󳬳���ͨ�����ĸ����������������Լ���״̬
* �������������Ϊ��������
*/

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
void test01()
{
	MyAdd add;
	cout<<add(1, 2)<<endl;
}

//2���������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}
	int count;//�ڲ��Լ���״̬
};

void test02()
{
	MyPrint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint���ô���Ϊ" << myprint.count << endl;
}

//3���������������Ϊ��������
void doPrint(MyPrint& mp, string test)
{
	mp(test);
}

void test03()
{
	MyPrint myprint;
	doPrint(myprint, "wjjj");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
}