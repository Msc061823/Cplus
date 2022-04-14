#include<iostream>
using namespace std;
int main()
{

    int i, j, s1[2][3] = { 1,2,3,4,5,6 }, s2[3][2];

    //转秩

    /**********Program**********/
    for (i = 0;i < 2;i++)
    {
        for (j = 0;j < 3;j++)
        {
            s2[j][i] = s1[i][j];
        }
    }
      
    /**********  End  **********/

    //输出

    cout << "转置矩阵结果：" << endl;


    /**********Program**********/

    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 2;j++)
        {
            cout << s2[i][j]<<" ";
        }
        cout << endl;
    }



    /**********  End  **********/

}