#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class Circle
{
public:
	void set(Point a);//дԲ������

	Point get();//����Բ��

	void setr(int a);

	int getr();

private:
	int r;//�뾶
	Point p;//Բ�����꣬�����п���ʹ��һ������Ϊ�����Ա
};