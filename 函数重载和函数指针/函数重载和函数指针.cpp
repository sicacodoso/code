#define _CRT_SECURE_NO_WORANINGS	
#include<iostream>

using namespace std;

int func1(int a, int b)
{
	cout << "func" << endl;
	return 0;
}
int func1(int a, int b,int c)
{
	cout << "func2" << endl;
	return 0;
}
//1.定义一种函数类型
typedef int(MY_FUNC)(int, int);
//2定义一个指向函数类型的指针类型
typedef int(*MY_FUNC_P)(int, int);

int main(void)
{	//函数指针的三个方式
	//1
	MY_FUNC *fp = NULL;
	fp = func1;
	fp(10, 20);
	
	//2
	MY_FUNC_P fp1 = NULL;
	fp1 = func1;
	fp1(10, 20);

	//3
	int(*fp3)(int, int) = NULL;
	fp3 = func1;   //给函数指针赋值时，会发生函数重载匹配
	fp3(10, 20);

	func1(10, 20);
	func1(10, 20, 30);

	int(*fp4)(int, int, int) = NULL;//在这已经发生函数重载，指向函数已经固定
	fp4 = func1;
	fp3(10, 20);//fp3 --> func1(int int)
	fp4(10, 20, 40);

	return 0;
}