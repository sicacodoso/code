#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>

using namespace std;


class hero
{
public://���ʿ���Ȩ��
	char name[64];
	int sex;

	void printHero()
	{
		cout << "hero" << endl;
		cout << "name= " << name << endl;
		cout << "sex= " << sex << endl;
	}

	void run()
	{
		cout << name << "���ܲ�" << endl;
	}
private:
	
};




int main(void)
{
	hero hero1;
	strcpy(hero1.name, "daliu");
	hero1.sex = 1;
	hero1.printHero();
	hero1.run();



	return 0;
}