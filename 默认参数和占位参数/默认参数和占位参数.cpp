#define _CRT_SECURE_NO_WORANINGS	
#include<iostream>

using namespace std;

void func(int a= 999)
{
	cout << a << endl;
}

int get_volum(int l, int w, int h)
{
	cout << "len=" << l << endl;
	cout << "wight=" << w << endl;
	cout << "hight=" << h << endl;

	return l * w * h;

}

int	main(void)
{
	int vulue = 3;
	func();
	int l = 21;
	int w = 23;
	int h = 23;
	cout<<"Ìå»ýÊÇ="<<get_volum(l, w, h)<<endl;
}