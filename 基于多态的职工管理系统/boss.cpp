#include"boss.h"

boss::boss(int id, string name, int idi)
{
	m_id = id;
	m_name = name;
	m_deptid =idi;
}

void boss::showInfo()
{
	cout << "ְ����ţ�" << m_id
		<< "\tְ��������" << m_name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

string boss::getDeptName()
{
	return string("�ϰ�");
}