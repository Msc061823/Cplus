#include<iostream>
using namespace std;

int main()
{
	int temp=0;
	int f1 = 0;
	int f2 = 1;
	while (temp<100)		//temp为前两项之和,大于等于100时循环终止	也可以写为 while(f2<100)
	{
		//使f1,f2两项后移

		temp = f1 + f2;
		f1 = f2;
		f2=temp;
		cout << f1<< endl;
	}
}
