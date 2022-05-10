#include <iostream>
using namespace std;

int fun(int n)
{
	/**********Program**********/
	int sum = 0, s = 1, i;
	for (i = 1;i <=n;i += 2)
	{
		sum = sum + i * s; /*控制符号交替变换*/
		s = -s;
	}
	return sum;
	/**********  End  **********/
}

int main()
{
	cout << fun(101) << endl;
}
