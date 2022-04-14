#include<iostream>
using namespace std;

//函数常见样式
//1、无参无返

void type1()
{
	cout << "this is type1" << endl;
}

//2、有参无返

void type2(int a)
{
	cout << "this is type2 a=" << a << endl;
}

//3、无参有返

int type3()
{
	cout << "this is type3" << endl;
	return 666;
}

//4、有参有返
int type4(int b)
{
	cout << "this is type4 b=" << b << endl;
	return 888;
}

int main()
{
	//无参无返函数调用
	type1();

	//有参无返函数调用
	type2(100);

	//有参无返函数调用
	int num1 = type3();
	cout << "num1=" << num1 << endl;

	//有参有返函数调用
	int num2 = type4(200);
	cout << "num2=" << num2 << endl;

	system("pause");
}
