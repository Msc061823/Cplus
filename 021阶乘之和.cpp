#include<iostream>
using namespace std;
int main()
{

 int i = 0, s = 0, t = 1;

 for (i = 1;i <= 10;i++)
 {

 t = i * t;
 s += t;
   
 }

 cout << "合计s=" << s << endl;

 return 0;
}

