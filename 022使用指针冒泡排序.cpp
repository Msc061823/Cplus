#include<iostream>
using namespace std;

//冒泡排序函数	参数1为数组首地址		参数2为数组长度
void bubbleSort(int *arr,int length)
{
	for (int i = 0;i < length - 1;i++)
	{
		for (int j = 0;j < length - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组函数
void printArray(int* arr, int length)
{
	for (int i = 0;i < length;i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	//1、创建数组
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};

	int length = sizeof(arr) / sizeof(arr[0]);	//数组长度

	//2、创建函数,实现冒泡排序
	bubbleSort(arr,length);

	//3、打印排序后的数组
	printArray(arr,length);

	return 0;
}
