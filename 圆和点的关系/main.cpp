#include<iostream>
#include"Point.h"
#include"Circle.h"
using namespace std;

//class Point
//{
//	int x;
//	int y;
//public:
//	void setx(int a)
//	{
//		x = a;
//	}
//	int getx()
//	{
//		return x;
//	}
//	void sety(int a)
//	{
//		y = a;
//	}
//	int gety()
//	{
//		return y;
//	}
//};
//class Circle
//{
//public:
//	void set(Point a)//写圆心坐标
//	{
//		p = a;
//	}
//	Point get()//返回圆心
//	{
//		return p;
//	}
//	void setr(int a)
//	{
//		r = a;
//	}
//	int getr()
//	{
//		return r;
//	}
//private:
//	int r;//半径
//	Point p;//圆心坐标，在类中可以使另一个类作为本类成员
//};

void isInCircle(Point p, Circle c)
{
	if ((c.get().getx() - p.getx()) * (c.get().getx() - p.getx()) + (c.get().gety() - p.gety()) * (c.get().gety() - p.gety()) < c.getr())
		cout << "点在圆内！" << endl;
	else if ((c.get().getx() - p.getx()) * (c.get().getx() - p.getx()) + (c.get().gety() - p.gety()) * (c.get().gety() - p.gety()) == c.getr())
		cout << "点在圆上！" << endl;
	else
		cout << "点在圆外！" << endl;
}
int main()
{
	//创建点
	Point testp;
	testp.setx(1);
	testp.sety(2);
	Point centerp;//圆心点
	centerp.setx(1);
	centerp.sety(1);
	//创建圆
	Circle c1;
	c1.set(centerp);
	c1.setr(2);
	isInCircle(testp, c1);

	system("pause");
}