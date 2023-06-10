#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 100,250,330,234,324 };
	int num;
	num = arr[0];
	for (int i = 1; i <= 4; i++)
	{

		if (num <= arr[i])
			num = arr[i];
	}
	cout << "最大数为：" << num << endl;
	system("pause");
}