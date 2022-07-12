#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0||b==0)
    return 0;
    else if(a==b)
    return 1;
    else if(a>b)
    return gcd(a-b,b);
    else
    return gcd(a,a-b);
}
int main()
{
    int n,a;
    cout<<"Enter the Number:";
    cin>>n;
    a=n-1;
    while(1)
    {
    if(gcd(a,n)==1)
    break;
    a--;
    }
    cout<<a;
}
