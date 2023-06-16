#include<iostream>
using namespace std;
//继承的好处：减少重复代码
//语法 class 子类 ：继承方式 父类
//子类也称为派生类
//父类也称为基类
class BasePage
{
public:
	//公共代码
};

class Java : public BasePage
{
public:
	//特有代码

};
int main()
{
	system("pause");
}