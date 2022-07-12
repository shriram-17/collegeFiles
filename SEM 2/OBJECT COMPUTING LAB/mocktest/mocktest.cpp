#include"mocktest.h"
#include<iostream>
#include<math.h>


using namespace std;
Point::Point()
{
    x=0;
    y=0;
}
Point::Point(int x,int y)
{
this->x=x;
this->y=y;
}
Point Point::Add(Point a)
{
this->a.x=x+y;
this->a.y=x+y;
return a;
}
 Point Point::Sub(Point b)
{
this->b.x=x-y;
this->b.y=x-y;
return a;
}
bool Point::isorgin()
{
  if(x==0&&y==0)
  return true;
  else
  return false;
}
Point::Point Mul(int a,Point x)

{   if(isorgin())
    {
    cout<<"Both Cordninates are in Orgin";
    return x;
    }
    return a*x;
}
float Point::Dis(Point a)
{   float dis;
    dis=sqrt((a.x*x)+(a.y*y));
    return dis;
}
void Point::CheckQuaradrant()
{
    if(x>0&&y>0)
    {
        cout<<"The Coridinate is First Quadrant";
    }
    else if(x<0&&y>0)
    {
        cout<<"The Coridinate is second Quadrant";
    }
    else if(x<0&&y<0)
    {
        cout<<"The Coridinate is Thrid Quadrant";
    }
    else if(x>0&&y<0)
    {
        cout<<"The Cordinate id Fourth Quadrant";
    }
}
void Point::Display()
{
    cout<<x<<" "<<y;
}
