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
//	void set(Point a)//дԲ������
//	{
//		p = a;
//	}
//	Point get()//����Բ��
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
//	int r;//�뾶
//	Point p;//Բ�����꣬�����п���ʹ��һ������Ϊ�����Ա
//};

void isInCircle(Point p, Circle c)
{
	if ((c.get().getx() - p.getx()) * (c.get().getx() - p.getx()) + (c.get().gety() - p.gety()) * (c.get().gety() - p.gety()) < c.getr())
		cout << "����Բ�ڣ�" << endl;
	else if ((c.get().getx() - p.getx()) * (c.get().getx() - p.getx()) + (c.get().gety() - p.gety()) * (c.get().gety() - p.gety()) == c.getr())
		cout << "����Բ�ϣ�" << endl;
	else
		cout << "����Բ�⣡" << endl;
}
int main()
{
	//������
	Point testp;
	testp.setx(1);
	testp.sety(2);
	Point centerp;//Բ�ĵ�
	centerp.setx(1);
	centerp.sety(1);
	//����Բ
	Circle c1;
	c1.set(centerp);
	c1.setr(2);
	isInCircle(testp, c1);

	system("pause");
}