#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整型数字的比较，返回较大的值
//函数声明
int max(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
}

int max(int a, int b)
{
	cout << "谁大：";
	return a > b ? a : b;
}
