#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在叫唤" << endl;
	}
};

class Cat:public Animal
{
public:
	void speak()
	{
		cout << "小猫在喵喵喵" << endl;
	}

};
//地址早绑定 编译阶段就已经确定地址
//如果想执行猫说话 地址就不能提前绑定 需要在运行阶段进行绑定 地址晚绑定
void dospeak(Animal& animal)
{
	animal.speak();
}

void test01()
{
	Cat c;
	dospeak(c);
}
int main()
{
	test01();
	system("pause");
}
//动态多态满足条件
//1、有继承关系
//2、子类要重写父类的虚函数

//动态多态使用
//父类的指针或者引用 执行子类对象 