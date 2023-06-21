#include<iostream>
using namespace std;

//实现通用的对数组进行排序的函数
//规则：从大到小
//算法：选择排序
//测试：int数组 char数组

//交换模版
template <class T>
void my_Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

//排序算法
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

//打印模版
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
	//测试char类型数组
	char charArr[] = { 'a','d','b','c','f','e' };
	select_Sort(charArr, sizeof(charArr) / sizeof(charArr[0]));
	print(charArr, sizeof(charArr) / sizeof(charArr[0]));
}

void test02()
{
	//测试int类型数组
	int intArr[] = { 1,23,4,56,6 };
	select_Sort(intArr, sizeof(intArr) / sizeof(intArr[0]));
	print(intArr, sizeof(intArr) / sizeof(intArr[0]));
}

int main()
{
	test02();
	system("pause");
}