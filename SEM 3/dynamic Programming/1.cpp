#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n,k,i,j,c;
    cin>>n;
    cin>>k;
    c=0;
    int a[n],temp[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;i<=j;j++)
    {
        if(abs(a[i]-a[j])<=k)
        {
            temp[c++]=a[i];

        }

    }
    }
    cout<<"The Elements in contiguous array";
    for(i=0;i<n;i++)
    {
    cout<<temp[i]<<endl;

    }



}
