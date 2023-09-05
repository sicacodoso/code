#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{

	int grade = 99;
	string final_grade = (grade > 60) ? "pass" : "fail";
	cout << final_grade << endl;
	return 0; 
}
