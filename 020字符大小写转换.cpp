#include <iostream>
#include<cstring>
using namespace std;
int main()

{

    char s[] = "aaBB";

    for (int i = 0;i < 4;i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }

    cout << s;

    return 0;

}
