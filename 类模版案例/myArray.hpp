#pragma once 
#include<iostream>
#include<string>
using namespace std;

template<class T>
class myArray
{
public:
	myArray(int capacity)
	{
		//cout << "myArray类构造函数调用" << endl;
		
		m_Size = 0;
		m_Capacity = capacity;
		m_Address = new T[capacity];
	}

	myArray(const myArray& arr)
	{
		//cout << "myArray类拷贝构造函数调用" << endl;
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;

		//深拷贝
		m_Address = new T[m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			m_Address[i] = arr.m_Address[i];
		}
	}

	//重载赋值运算符来防止浅拷贝
	myArray& operator=(myArray& arr)
	{
		//cout << "myArray类赋值运算符重载函数调用" << endl;
		if (m_Address != NULL)
		{
			delete[] m_Address;
			m_Address = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}

		//深拷贝
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		m_Address = new T[m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			m_Address[i] = arr.m_Address[i];
		}
		return *this;
	}

	//尾插法
	void Tail_Insert(const T& val)
	{
		//判断是否容量已满，能否继续插入
		if (m_Size == m_Capacity)
			return;
		else
		{
			m_Address[m_Size] = val;
			m_Size++;
		}
	}
	//尾删法
	void Tail_Delete()
	{
		if (m_Size == 0)
			return;
		else
			m_Size--;
	}

	//通过下标访问数组中元素
	//重载[]
	T& operator [](int index)
	{
		return m_Address[index];
	}

	//返回数组容量
	int getCapacity()
	{
		return m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return m_Size;
	}

	~myArray()
	{
		//cout << "myArray类析造函数调用" << endl;
		if (m_Address != NULL)
		{
			delete[] m_Address;
			m_Address = NULL;
			m_Size = 0;
			m_Capacity = 0;
		}
	}
private:
	T* m_Address;
	int m_Capacity;//数组容量
	int m_Size;//数组大小
};