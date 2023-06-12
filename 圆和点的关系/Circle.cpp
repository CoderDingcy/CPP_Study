#include"Circle.h"
#include"Point.h"
void Circle::set(Point a)//写圆心坐标
{
	p = a;
}
Point Circle::get()//返回圆心
{
	return p;
}
void Circle::setr(int a)
{
	r = a;
}
int Circle::getr()
{
	return r;
}