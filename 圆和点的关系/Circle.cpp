#include"Circle.h"
#include"Point.h"
void Circle::set(Point a)//дԲ������
{
	p = a;
}
Point Circle::get()//����Բ��
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