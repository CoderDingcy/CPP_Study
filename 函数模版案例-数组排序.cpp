#include<iostream>
using namespace std;

//ʵ��ͨ�õĶ������������ĺ���
//���򣺴Ӵ�С
//�㷨��ѡ������
//���ԣ�int���� char����

//����ģ��
template <class T>
void my_Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<class T>
void select_Sort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
				max = j;
		}
		if (max != i)
			my_Swap(arr[max],arr[i]);
	}
}

//��ӡģ��
template<class T>
void print(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	//����char��������
	char charArr[] = { 'a','d','b','c','f','e' };
	select_Sort(charArr, sizeof(charArr) / sizeof(charArr[0]));
	print(charArr, sizeof(charArr) / sizeof(charArr[0]));
}

void test02()
{
	//����int��������
	int intArr[] = { 1,23,4,56,6 };
	select_Sort(intArr, sizeof(intArr) / sizeof(intArr[0]));
	print(intArr, sizeof(intArr) / sizeof(intArr[0]));
}

int main()
{
	test02();
	system("pause");
}