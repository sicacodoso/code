#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>

using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

void init_date(struct Date & d)
{
	cout << "year,month,day" << endl;
	cin >> d.year;
	cin >> d.month;
	cin >> d.day;
}


void print_date(struct Date &d)
{
	cout << d.year << "��" << d.month << "��" << d.day << "��" << endl;
}

bool is_leap_year(struct Date &d)
{
	if  (((d.year % 4 == 0) &&(d.year %100 != 0)) || (d.year % 400 == 0)){
		return true;
	}
	return false;
}

//����ڲ�Ĭ�Ϸ��ʿ���Ȩ����private
class Hero
{
	int year;
};

//�ṹ��Ĭ�Ϸ��ʿ���Ȩ����public
//c++�ṹ�����һ���ֻ࣬�Ƿ���Ȩ�޺��������𣬽ṹ��Ҳ�����г�Ա����
struct Hero2
{
	int year;
	void print()
	{

	}

};

class MyDate
{
public:
	//��Ա���� ��Ա����
	void init_date()
	{
		cout << "year,month,day" << endl;
		cin >> year;
		cin >> month;
		cin >> day;
	}
	
	void print_date()
	{
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
	
	bool is_leap_year()
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
			return true;
		}
		return false;
	}

	int get_year()
	{
		return year;
	}

	void set_year(int new_year)
	{
		year = new_year;
	}




protected://��������Ȩ�ޣ�����ļ̳���private�������ڵ������privateһ����
private:
	int year;
	int month;
	int day;
};



int main(void)
{	
#if 0
	Date d1;
	init_date(d1);
	print_date(d1);
	if (is_leap_year(d1) == true) {
		cout << "������" << endl;
	}
	else
	{
		cout << "��������" << endl;
	}
#endif

	MyDate my_date;

	my_date.init_date();
	my_date.print_date();
	if (my_date.is_leap_year() == true) {
		cout << "������" << endl;
	}
	else
	{
		cout << "��������" << endl;
	}

	//getter setter
	cout << my_date.get_year() << endl;
	my_date.set_year(2000);
	cout << my_date.get_year() << endl;

	H ero h;
	Hero2 h;
	return 0;
}