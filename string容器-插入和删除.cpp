#include<iostream>
using namespace std;
#include<string>

//�ַ��������ɾ��
void test01()
{
	string str = "Hello";
	//����
	str.insert(1, "111");

	cout << str<<endl;
    //ɾ��
	str.erase(1, 3);
	cout << str<<endl;
}
int main()
{
	test01();
	system("pause");
}