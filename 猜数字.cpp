#include<iostream>
using namespace std;
int GetRandomNumber()
{
	int RandomNumber;
	srand((unsigned)time(NULL));//time()用系统时间初始化种。为rand()生成不同的随机种子。
	RandomNumber = rand() % 100 + 1;//生成1~100随机数
	return RandomNumber;
}
int main()
{
	int num1 = GetRandomNumber();
	cout << "请输入数字:" <<endl;
	int num2 = 0;
	cin >> num2;
	while (num1 != num2)
	{
		if (num2 > num1)
		{
			cout << "猜大了，请重新输入！" << endl;
			cin >> num2;
		}
		else if (num2 < num1)
		{
			cout << "猜小了，请重新输入！" << endl;
			cin >> num2;
		}

	}
	cout << "恭喜你，猜对了！" << endl;
	cout << "随机数为" << num1;



}