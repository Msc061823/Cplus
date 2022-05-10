#include <iostream>
using namespace std;

int fun(int m[10]);
int main()
{
	int m[10] = { 1221,2243,2332,1435,1236,5623,4321,4356,6754,3234 };
	int n = fun(m); //n为对称数的个数
	cout << "对称数的个数：" << n << endl;
}

int fun(int m[]) //等价于 int fun(int *m) 或 int fun(int m[10])
{
	int a, b, c, d;//a,b,c,d分别为千位,百位,十位,个位上的数字
	int n = 0;    //n为对称数的个数

	for (int i = 0;i < 10;i++)
	{
		a = m[i]/1000;
		b = m[i] % 1000/100;
		c = m[i] % 100 / 10;
		d = m[i] % 10;
		if (a == d && b == c)
		{
			n++;
		}
	}

	return n;
}
