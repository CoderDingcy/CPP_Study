#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	cout << "��ֱ�������ֻС��A��B��C�����أ�" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A > B)
	{
		if (A > C)
		{

			cout << "С��A�����صģ�" << endl;
		}
		else
			cout << "С��C�����صģ�" << endl;

	}
	else
	{
		if (B > C)
			cout << "С��B�����صģ�" << endl;
		else
			cout << "С��C�����ص�!" << endl;

	}
	system("pause");
}