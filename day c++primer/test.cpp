#include<iostream>
using namespace std;

int main() 
{	
	/*char v1 = {}, v2 = {};
	cin >> v1 >> v2;
	cout << "the sum of " << v1 << " And " << v2 << " is " << v1 + v2 << endl;
	*/
	int val = 50,i = 0,sum = 50;
	while (i <= 50)
	{
		++val;
		sum += val;
	}
	cout << sum << endl;
	return 0;
}