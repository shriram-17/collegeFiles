#ifndef OPERATOR_H_INCLUDED
#define OPERATOR_H_INCLUDED
#include <iostream>
using namespace std;
class Sample
{
    int x;
    int y;

    public:
    Sample()
    {
    x=y=0;

    }
    Sample(int a,int b)
    {
    x=a;
    y=b;
    }
    Sample operator +(Sample a)
    {
    Sample s;

    s.x=x+a.x;
    s.y=y+a.y;

    return s;
    }
    Sample operator -(Sample a)
    {   Sample s;
        s.x=x-a.x;
        s.y=y-a.y;
        return s;
    }
    Sample operator*(Sample a)
    {
        Sample s;
        s.x=x*a.x;
        s.y=y*a.y;
        return s;
    }
    Sample  operator++ (int)
    {
    Sample s;
    s.x=x++;
    s.y=y++;
    return s;
    }
    bool operator==(Sample a)
    {
        if(x==a.x&&y==a.y)
        return 1;
        else
        return 0;
    }
    void Display()
    {
    cout<<x<<"\t"<<y<<endl;
    }

};


#endif // OPERATOR_H_INCLUDED
