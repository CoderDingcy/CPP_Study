#include<iostream>
using namespace std;

class cpu
{
public:
	virtual void workC() = 0;
};
class xianka
{
public:
	virtual void workX() = 0;
}; 
class neicun
{
public:
	virtual void workN() = 0;
};
class Intelc :public cpu
{
public:
	void workC()
	{
		cout << "Intel��cpu���ڹ���" << endl;
}
};

class Intelx :public xianka
{
public:
	void workX()
	{
		cout << "Intel���Կ����ڹ���" << endl;
	}
};

class Inteln :public neicun
{
public:
	void workN()
	{
		cout << "Intel���ڴ����ڹ���" << endl;
	}
};

class computer
{
public:
	computer(cpu* c,xianka* xk,neicun* nc)
	{
		m_c = c;
		m_xk = xk;
		m_nc = nc;
	}
	void work()
	{
		m_c->workC();
		m_xk->workX();
		m_nc->workN();
	}
	//�ṩ���������ͷ����������
	~computer()
	{
		if (m_c != NULL)
		{
			delete m_c;
			m_c = NULL;
		}
		else if (m_xk != NULL)
		{
			delete m_xk;
			m_xk = NULL;
		}
		else if (m_nc != NULL)
		{
			delete m_nc;
			m_nc = NULL;
		}
	}
private:
	cpu* m_c;
	xianka* m_xk;
	neicun* m_nc;
};

int main()
{
	//��һ̨�������
	cpu* ic = new Intelc;
	xianka* xk = new Intelx;
	neicun* nc = new Inteln;
	//��һ̨���� 
	/*computer c(ic,xk,nc);
	c.work();*/
	computer* c = new computer(ic, xk, nc);
	c->work();
	delete c;
	system("pause");
}