#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class Circle
{
public:
	void set(Point a);//写圆心坐标

	Point get();//返回圆心

	void setr(int a);

	int getr();

private:
	int r;//半径
	Point p;//圆心坐标，在类中可以使另一个类作为本类成员
};