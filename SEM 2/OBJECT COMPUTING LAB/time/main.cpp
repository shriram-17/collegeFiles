#include <iostream>
#include"time.h"
using namespace std;

int main()
{
    Time t1(12,30,30),t2(12,30,30);
    Time t3=t1+t2;
    t3.print();
    cout<<endl;
    cout<<(t1<t2);
}
