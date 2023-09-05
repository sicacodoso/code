#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>

using namespace std;

void func(int a= 999)
{
	cout << a << endl;
}

int get_volum(int l, int w, int h)//默认参数只能从右往左开始设置
{
	cout << "len=" << l << endl;
	cout << "wight=" << w << endl;
	cout << "hight=" << h << endl;

	return l * w * h;

}

void func2(int c, int)//占位参数没啥意义,亚元
{
	cout << c << endl;
}
int	main(void)
{
	int vulue = 3;
	func();
	int l = 21;
	int w = 23;
	int h = 23;
	cout<<"体积是="<<get_volum(l, w, h)<<endl;
}