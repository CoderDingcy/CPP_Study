#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//����ǰ�õ��� ++
	MyInteger& operator++()//�������õ�Ŀ���Ƕ�һ�����ݽ��в���
	{
		m_num++;
		return *this;
	}
	//���غ��õ���
	MyInteger operator++(int)//ռλ������������ǰ�úͺ���,���ﲻ�ܷ������ã���Ϊ��¼���Ǿֲ�����������ִ����ͻ��ͷſռ�
	{
		//1����¼��ʱ���
		MyInteger myint = *this;
		//2������
		m_num++;
		//3�����ص�ʱ���
		return myint;
	 }
private:
	int m_num;
};
//�������������
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << ++myint << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	/*test01();*/
	test02();
	system("pause");
}