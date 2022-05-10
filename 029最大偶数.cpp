#include <iostream>
using namespace std;

int fun(int* p, int n)
{
	int max=-1;
	for (int i = 0;i < n;i++)
	{	
		if (*p>max&&*p%2==0)
		{
			max = *p;		
		}
		*(p++);
	}
	return max;
}

int main()
{
	int a[10] = { 1,2,9,24,35,18,23,34,8,16 }, k;
	k = fun(a, 10);
	cout << "max=" << k << endl;
}
