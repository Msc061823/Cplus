#include<iostream> 
using namespace std;
int main()
{
    int days;
    struct ate
    {
        int year;
        int month;
        int day;
    };
    ate date;
    cout << "输入年月日(yyyy mm dd)：";
    cin >> date.year >> date.month >> date.day;
	days=0;
	switch (date.month)
	{
	case 1:days = date.day;break;
	case 2:days = date.day + 31;break;
	case 3:days = date.day + 59;break;
	case 4:days = date.day + 90;break;
	case 5:days = date.day + 120;break;
	case 6:days = date.day + 151;break;
	case 7:days = date.day + 181;break;
	case 8:days = date.day + 212;break;
	case 9:days = date.day + 243;break;
	case 10:days = date.day + 273;break;
	case 11:days = date.day + 304;break;
	case 12:days = date.day + 334;break;
	}
	if ((((date.year % 4 == 0) && (date.year % 100 != 0)) || (date.year % 400 == 0)) && date.month >= 3) 
	{
		days = days + 1;
	}
    cout << date.year << "年" << date.month << "月";
    cout << date.day << "日是第" << days<< "天";
    return 0;
}

