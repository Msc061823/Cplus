#include<iostream>
using namespace std;
int main()
{
	int a[][4] = { 56,45,-34,89,23,34,78,12,6,90,37,87 };
	int i, j, x_max, y_max, x_min, y_min, * p, max, min; //x_max,y_max最大值元素行、列号；x_min,y_min最小值元素行、列号
	
	p = a[0];	//p = &a[0][0];
	max = min = *p;

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (max < *(p + 4 * i + j))
			{
				max = *(p + 4 * i + j);
				x_max = i;
				y_max = j;
			}
		}
	}

	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (min > *(p + 4 * i + j))
			{
				min = *(p + 4 * i + j);
				x_min = i;
				y_min = j;
			}
		}
	}

	cout << "最大元素值:" << max << ",在第" << x_max + 1 << "行,第" << y_max + 1 << "列" << endl;
	cout << "最小元素值:" << min << ",在第" << x_min + 1 << "行,第" << y_min + 1 << "列" << endl;

	return 0;
}
