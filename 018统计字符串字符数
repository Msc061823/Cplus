#include<iostream>

using namespace std;

int main()
{

	char s[] = "abcde ABCDE 12345 #$%^&";
	int upper = 0, lower = 0, digital = 0, space = 0, other = 0; //几种字符变量初始化为0 
	int i;

	/**********Program**********/

	for (i = 0;i <= 22;i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			upper++;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			lower++;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			digital++;
		}
		else if (s[i] == 32)
		{
			space++;
		}
		else
		{
			other++;
		}
	}

	/**********  End  **********/

	cout << "大写字母有：" << upper << endl;
	cout << "小写字母有：" << lower << endl;
	cout << "数字有：" << digital << endl;
	cout << "空格有：" << space << endl;
	cout << "其它字符有：" << other << endl;
	return 0;

}

