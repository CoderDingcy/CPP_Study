#include<iostream>
using namespace std;
#include<deque>

void test01()
{
	deque<int> d;
	d.push_back(100);
	d.push_back(200);
	d.push_back(300);
	d.push_back(400);

	for (int i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}