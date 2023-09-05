#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>

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
double func1(double a)//函数重载不要写默认参数，防止调用出现函数冲突
{
	cout << "func4" << endl;
	return 0;
}

//函数重载条件，函数名相同，参数列表不同，与返回值无关

int main(void)
{
	func1(2);
	func1(2,3);
	func1(2,"d");//1能完全匹配的调用完全匹配，不能完全匹配的调用隐士转换，都匹配不到调用失败
	func1(2.12);
	return 0;
}