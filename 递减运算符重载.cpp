#include<iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger& operator--()//Ç°×º
	{
		this->m_num--;
		return *this;
	}
	MyInteger operator--(int)//ºó×º
	{
		MyInteger myint = *this;
		this->m_num--;
		return myint;
	}
	MyInteger()
	{
		m_num = 10;
	}
private:
	int m_num;
};

ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout <<myint.m_num;
	return cout;
}
int main()
{
	MyInteger i;
	cout << i--<<endl;
	cout << i << endl;
	system("pause");
}