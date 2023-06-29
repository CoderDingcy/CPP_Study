#include<iostream>
using namespace std;
#include<vector>

//�����ɾ��
/** `push_back(ele);`                                         //β������Ԫ��ele
* `pop_back();`                                                //ɾ�����һ��Ԫ��
* `insert(const_iterator pos, ele);`        //������ָ��λ��pos����Ԫ��ele
* `insert(const_iterator pos, int count,ele);`//������ָ��λ��pos����count��Ԫ��ele
* `erase(const_iterator pos);`                     //ɾ��������ָ���Ԫ��
* `erase(const_iterator start, const_iterator end);`//ɾ����������start��end֮���Ԫ��
* `clear();`                                                        //ɾ������������Ԫ��*/

void myPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	vector<int> v1;
	//β��
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	myPrint(v1);
	//βɾ
	for (int i = 0; i < 9; i++)
		v1.pop_back();
	myPrint(v1);

	//����
	v1.insert(v1.begin(), 100);//��ͷ������100
	myPrint(v1);

	//�������ذ汾 ����ָ�������Ԫ�ظ���
	v1.insert(v1.begin(), 2, 100);
	myPrint(v1);

	//ɾ��
	v1.erase(v1.begin());
	myPrint(v1);

	//ɾ�����ذ汾 ָ��ɾ���ķ�Χ
	/*v1.erase(v1.begin(), v1.end());*/
	v1.clear();//�������
	myPrint(v1);

}
int main()
{
	test01();
	system("pause");
}