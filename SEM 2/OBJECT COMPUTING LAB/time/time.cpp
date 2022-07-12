#include<iostream>
#include"time.h"
using namespace std;
Time::Time()
{
h=0;
m=0;
s=0;
}
Time::Time(int a,int b,int c)
{
    h=a;
    m=b;
    s=c;
}
Time Time ::operator+(Time a)
{
    Time b;
    b.h=h+a.h;
    if(b.h>=24)
    {
    b.h=0;
    }
    b.m=m+a.m;
    if(b.m>=60)
    {
        if(b.m==60)
        b.m=0;
        else if(b.m>60)
        {
        b.m=b.m-60;

        }

    }
    b.s=s+a.s;
    if(b.s>=60)
    {
        if(b.s==60)
        b.s=0;
        else if(b.s>60)
        {
        b.s=b.s-60;

        }

    }
    return b;
}
bool Time ::operator<(Time b)
{
    if(h<=b.h&&m<=b.m&&s<=b.s)
    return 1;
    else
    return 0;

}
void Time::print()
{
cout<<h<<":"<<m<<":"<<s;
}
