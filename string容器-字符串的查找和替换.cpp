#include<iostream>
using namespace std;

//字符串的查找和替换

//1、查找
void test01()
{
	string str1 = "abcdefoiadsiasijdaoisdsiaosdkdef";
	
	//find
	int pos = str1.find("ef");
	if (pos == -1)
		cout << "未找到字符串！" << endl;
	else
	cout << "pos=" << pos << endl;

	//rfind
	//rfind与find的区别：find从左往右查找   rfind从右往左查找
	//find和rfind都会返回你所找到的第一个字符的位置
	pos=str1.rfind("ef"); 
	cout << "pos=" << pos << endl;
}

//2、替换
void test02()
{
	string str1 = "adshsd";
	//从1号位置起，三个字符被替换为字符串“1111”
	str1.replace(1, 3, "1111");
	cout << str1;
}
int main()
{
	test02();
	system("pause");
}