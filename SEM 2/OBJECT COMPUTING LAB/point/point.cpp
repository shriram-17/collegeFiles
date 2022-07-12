#include"point.h"
#include<iostream>
using namespace std;
MyPoint::MyPoint()
{
    x=y=0;
}
MyPoint::MyPoint(int x,int y)
{
    this->x=x;
    this->y=y;

}
bool MyPoint::isOrgin()
{
    if(x==0&&y==0)
    return true;
    else
    return  false;
}
