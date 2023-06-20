#include"employee.h"
void employee::showInfo()
{
	cout << "职工编号：" << m_id
		<< "\t职工姓名：" << m_name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}

employee::employee(int id,string name,int did)
{
	m_id = id;
	m_name = name;
	m_deptid = did;
}

string employee::getDeptName()
{
	return string("员工");
}
