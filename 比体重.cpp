#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	cout << "请分别输入三只小猪A、B、C的体重：" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A > B)
	{
		if (A > C)
		{

			cout << "小猪A是最重的！" << endl;
		}
		else
			cout << "小猪C是最重的！" << endl;

	}
	else
	{
		if (B > C)
			cout << "小猪B是最重的！" << endl;
		else
			cout << "小猪C是最重的!" << endl;

	}
	system("pause");
}