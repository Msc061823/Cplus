#include<iostream>
using namespace std;
int main()
{
	int m, n, i,j, temp;
	cout << "请输入m:" << endl;
	cin >> m;
	cout << "请输入n:"<< endl;
	cin >> n;
	if (m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m;i > 0;i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			cout << "最大公约数为：" << i << endl;
			break;
		}
	}
	for (j = m;;j++) 
	{
		if (j % m == 0 && j % n == 0)
		{
			cout << "最小公倍数为：" << j << endl;
			break;
		}
	}
	return 0;
}
