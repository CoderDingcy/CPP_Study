#include<iostream>
using namespace std;
class Person
{
public:
	void Showage()const//������ �ӵ�const����������thisָ��
	{
		this->b = 100;
		//age=100; == this->age=100;
		//this��ָ�볣����Ҫ�ǳ������ڲ����޸ĳ�Ա���Ե�ֵ����Ҫʹthisָ�벻�������޸�ָ���Ҳ���ָ���ֵ
	}
	void test()
	{

	}
	 
	int age;
		mutable int b;//����mutable �ڳ�������Ҳ�����޸ĳ�Ա���Ե�ֵ
};
int main()
{
	const Person p;
	p.b = 1000;//ֻҪ����mutable�����ܳ��������ǳ����󶼿����޸�
	//p.age = 1001;//�����޸�,�����������޸���ͨ�ĳ�Ա����
	//������ֻ�ܵ��ó�����
	p.Showage();
	//p.test();���ܵ���
	system("pause");
}