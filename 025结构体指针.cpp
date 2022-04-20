#include<iostream>
using namespace std;

//结构体指针
//定义学生结构体
struct student
{
	string name;	//姓名
	int age;	//年龄
	int score;	//分数
};


int main()
{
	//1、创建学生结构体变量
	struct student s = {"张三",19,100};

	//2、通过指针指向结构体变量
	struct student* p = &s;

	//3、通过指针访问结构体变量中的数据	需要使用'->'
	cout << "姓名：" << p->name << " " << "年龄：" << p->age << " " << "分数：" << p->score;

}
