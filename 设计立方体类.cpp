#include<iostream>
using namespace std;

class Cube
{
	int m_H;
	int m_W;
	int m_L;
public:
	void setH(int h)
	{
		m_H = h;

	}
	int getH()
	{
		return m_H;

	}
	void setL(int l)
	{
		m_L = l;

	}
	int getL()
	{
		return m_L;

	}
	void setW(int w)
	{
		m_W = w;

	}
	int getW()
	{
		return m_W;

	}
	int calMJ()
	{
		return (m_L * m_H + m_H * m_W + m_W * m_L) * 2;

	}
	int calTJ()
	{
		return m_L * m_W * m_H;
	}
	bool issame(Cube& c)
	{
		if (c.getH() == m_H && c.getL() == m_L && c.getW() == m_W)
			return true;
		else
			return false;
	}
};
bool issame(Cube& c1, Cube& c2)
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
		return true;
	else
		return false;
}
int main()
{
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	if (c2.issame(c1))
		cout << "相等" << endl;
	else
		cout << "不相等" << endl;
	/*if (issame(c1, c2))
		cout << "两立方体相等" << endl;
	else
		cout << "两立方体不相等" << endl;*/
	//cout << "S:" << c1.calMJ() << " " << "V:" << c1.calTJ() << endl;

	system("pause");
}