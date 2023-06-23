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
		//cout << "myArray�๹�캯������" << endl;
		
		m_Size = 0;
		m_Capacity = capacity;
		m_Address = new T[capacity];
	}

	myArray(const myArray& arr)
	{
		//cout << "myArray�࿽�����캯������" << endl;
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;

		//���
		m_Address = new T[m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			m_Address[i] = arr.m_Address[i];
		}
	}

	//���ظ�ֵ���������ֹǳ����
	myArray& operator=(myArray& arr)
	{
		//cout << "myArray�ำֵ��������غ�������" << endl;
		if (m_Address != NULL)
		{
			delete[] m_Address;
			m_Address = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}

		//���
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		m_Address = new T[m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			m_Address[i] = arr.m_Address[i];
		}
		return *this;
	}

	//β�巨
	void Tail_Insert(const T& val)
	{
		//�ж��Ƿ������������ܷ��������
		if (m_Size == m_Capacity)
			return;
		else
		{
			m_Address[m_Size] = val;
			m_Size++;
		}
	}
	//βɾ��
	void Tail_Delete()
	{
		if (m_Size == 0)
			return;
		else
			m_Size--;
	}

	//ͨ���±����������Ԫ��
	//����[]
	T& operator [](int index)
	{
		return m_Address[index];
	}

	//������������
	int getCapacity()
	{
		return m_Capacity;
	}

	//���������С
	int getSize()
	{
		return m_Size;
	}

	~myArray()
	{
		//cout << "myArray�����캯������" << endl;
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
	int m_Capacity;//��������
	int m_Size;//�����С
};