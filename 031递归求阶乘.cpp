#include<iostream>
using namespace std;
int fun(int k)
{
	long m;
	if (k == 0 || k == 1)
	{
		m = 1;
	}
	else
	{
		m = fun(k - 1) * k;
	}
	return m;
}
int main()
{
	int m;
	cin >> m;
	cout << "The result is " << fun(m) << endl;
}
