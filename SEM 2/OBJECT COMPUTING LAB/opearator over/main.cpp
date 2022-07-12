#include <iostream>
#include"operator.h"
using namespace std;

int main()
{   Sample s1(3,5),s2(1,5);
    Sample s3= s1+s2;
    Sample s5= s3-s1;
    Sample s6=s1*s3;
    Sample s7,s8;
    cout<<(s7==s6)<<endl;

     s3.Display();
     s5.Display();
     s6.Display();
      s3++;
     s3.Display();
    return 0;
}
