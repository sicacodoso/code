#define _CRT_SECURE_NO_WORANINGS	
#include<iostream>

using namespace std;

int func1(int a)
{
	cout << "func1" << endl;
	return 0;
}
int func1(int a,int b)
{
	cout << "func2" << endl;
	return 0;
}
int func1(int a,string c)
{
	cout << "func3" << endl;
	return 0;
}
double func1(double a)
{
	cout << "func4" << endl;
	return 0;
}

//����������������������ͬ�������б�ͬ���뷵��ֵ�޹�

int main(void)
{
	func1(2);
	func1(2,3);
	func1(2,"d");
	func1(2.12);
	return 0;
}