#include"employee.h"
void employee::showInfo()
{
	cout << "ְ����ţ�" << m_id
		<< "\tְ��������" << m_name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;
}

employee::employee(int id,string name,int did)
{
	m_id = id;
	m_name = name;
	m_deptid = did;
}

string employee::getDeptName()
{
	return string("Ա��");
}
