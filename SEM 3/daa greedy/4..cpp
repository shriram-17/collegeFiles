#include<iostream>
using namespace std;
int binarysearch(int arr[],int left,int right,int x)
{
    int mid;
    if(right>left)
    {
        mid=(left+right)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            return binarysearch(arr,left,mid-1,x);
        else if(arr[mid]<x)
            return binarysearch(arr,mid+1,right,x);

    }
    return -1;
}
int main()
{
    int pos,i;
    int arr[5]={1,4,5,6,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=5;
    for(i=1;i<n;i++)
    {
        pos=binarysearch(arr,0,n-1,x+i);
        if(pos==-1)
            break;
    }
    cout<<x+i;
}
