#include<iostream>
using namespace std;
#include<stack>

//栈stack容器

void test01()
{
	//符合先进后出的数据结狗
	stack<int> s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

    //只要栈不为空 查看栈顶并执行出栈操作
	while (!s.empty())
	{
		cout << "栈顶元素为：" << s.top() << endl;
		s.pop();
	}

	cout << "栈的大小为：" << s.size()<<endl;
}

int main()
{
	test01();
	system("pause");
}