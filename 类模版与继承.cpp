#include<iostream>
using namespace std;

template<class T>
class Base
{
	T m_Num;
};

//class Son :public Base//���д���Ǵ������ΪT��ȷ�����ͣ��̳й����޷�����ռ�

class Son :public Base<int>
{

};

void test01()
{
	Son s1;
}

//��������ָ�������е�T���ͣ�����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class Son1:public Base<T1> 
{
public:
	Son1()
	{
		cout << "��������Ϊ��" << typeid(obj).name() << endl;
	}
	T2 obj;
};

void test02()
{
	Son1<int, int> s2;
}

int main()
{
	test02();	
	system("pause");
}