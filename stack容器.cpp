#include<iostream>
using namespace std;
#include<stack>

//ջstack����

void test01()
{
	//�����Ƚ���������ݽṷ
	stack<int> s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

    //ֻҪջ��Ϊ�� �鿴ջ����ִ�г�ջ����
	while (!s.empty())
	{
		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
		s.pop();
	}

	cout << "ջ�Ĵ�СΪ��" << s.size()<<endl;
}

int main()
{
	test01();
	system("pause");
}