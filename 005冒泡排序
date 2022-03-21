#include<iostream>
using namespace std;

int main()
{
	//利用冒泡排序实现升序降序

	int arr[9] = {4,2,8,0,5,7,1,3,9};
	
	//输出排序前数组
	cout << "排序前：";
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	//开始冒泡排序
	//总共排序轮数为  元素个数 - 1
	for (int i = 0;i < 8;i++)
	{
		//内层循环对比  次数=元素个数 -  当前轮数 - 1
		for (int j = 0;j < 8-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//排序后结果
	cout << "排序后：";
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	return 0;
}
