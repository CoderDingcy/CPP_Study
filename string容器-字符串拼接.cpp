#include<iostream>
using namespace std;
#include<string>

/*
* `string& operator+=(const char* str);`                   //重载+=操作符
* `string& operator+=(const char c);`                         //重载+=操作符
* `string& operator+=(const string& str);`                //重载+=操作符
* `string& append(const char *s); `                               //把字符串s连接到当前字符串结尾
* `string& append(const char *s, int n);`                 //把字符串s的前n个字符连接到当前字符串结尾
* `string& append(const string &s);`                           //同operator+=(const string& str)
* `string& append(const string &s, int pos, int n);`//字符串s中从pos开始的n个字符连接到字符串结尾 这里经过验证好像不是字符而是字节
*/

void test01()
{
	string str1;
	str1 = "我";
	str1 += "爱玩游戏";
	str1 += ':';
	string str2 = "LOL DNF";
	str1 += str2;
	str1.append("，哈哈！");
	str1.append("game abcd", 5);
	string str5 = ",我也没想到！";
	str1.append(str5);
	string str6;
	string str7 = "abcdef";
	str6.append(str1,0,2);
	cout << str1 << endl;
	cout << str6 << endl;
}

int main()
{
	test01();
	system("pause");
}