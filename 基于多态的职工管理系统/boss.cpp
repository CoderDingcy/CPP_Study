#include"boss.h"

boss::boss(int id, string name, int idi)
{
	m_id = id;
	m_name = name;
	m_deptid =idi;
}

void boss::showInfo()
{
	cout << "职工编号：" << m_id
		<< "\t职工姓名：" << m_name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：管理公司所有事务" << endl;
}

string boss::getDeptName()
{
	return string("老板");
}