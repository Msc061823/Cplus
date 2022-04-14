#include<iostream>
using namespace std;
int main()
{
    int year, month;
    cout << "请输入年份和月份:" ;
    cin >> year >> month;
    if (month == 2)
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            cout << "29天" << endl;
        }
        else
        {
            cout << "28天" << endl;
        }
      
    }
    else
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            cout << "31天" << endl;break;

        case 4:
        case 6:
        case 9:
        case 11:

            cout << "30天" << endl;break;
        default:
            cout << "请输入正确的月份！";
        }
    }
}
