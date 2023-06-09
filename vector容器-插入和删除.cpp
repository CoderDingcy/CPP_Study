#include<iostream>
using namespace std;
#include<vector>

//插入和删除
/** `push_back(ele);`                                         //尾部插入元素ele
* `pop_back();`                                                //删除最后一个元素
* `insert(const_iterator pos, ele);`        //迭代器指向位置pos插入元素ele
* `insert(const_iterator pos, int count,ele);`//迭代器指向位置pos插入count个元素ele
* `erase(const_iterator pos);`                     //删除迭代器指向的元素
* `erase(const_iterator start, const_iterator end);`//删除迭代器从start到end之间的元素
* `clear();`                                                        //删除容器中所有元素*/

void myPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	vector<int> v1;
	//尾插
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	myPrint(v1);
	//尾删
	for (int i = 0; i < 9; i++)
		v1.pop_back();
	myPrint(v1);

	//插入
	v1.insert(v1.begin(), 100);//在头部插入100
	myPrint(v1);

	//插入重载版本 可以指定插入的元素个数
	v1.insert(v1.begin(), 2, 100);
	myPrint(v1);

	//删除
	v1.erase(v1.begin());
	myPrint(v1);

	//删除重载版本 指定删除的范围
	/*v1.erase(v1.begin(), v1.end());*/
	v1.clear();//清空容器
	myPrint(v1);

}
int main()
{
	test01();
	system("pause");
}