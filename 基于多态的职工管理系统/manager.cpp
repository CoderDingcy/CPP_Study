#include"manager.h"

manager::manager(int id, string name, int did)
{
	m_name = name;
	m_id = id;
	m_deptid = did;
}

string manager::getDeptName()
{
	return string("����");
}

void manager::showInfo()
{
	cout << "ְ����ţ�" << m_id
		<< "\tְ��������" << m_name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ������ϰ彻�������񣬲��·������Ա��" << endl;
}