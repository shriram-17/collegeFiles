#include<iostream>
using namespace std;

int Merge(int arr[],int temp[],int left,int mid,int right)
{
    int i,j,k;
    int count=0;
    i=left;
    j=mid;
    k=left;
    while((i<=mid-1)&&(j<=right))
    {
        if(arr[i]<=arr[j])
        {
          temp[k++]=arr[i++];
        }
        else
        {
          temp[k++]=arr[j++];
          count=count+(mid-i);
        }
    }
    while(i<=mid+1)
    {
    temp[k++]=arr[i++];
    }
    while(j<=right)
    {
    temp[k++]=arr[j++];
    }
    for(i=left;i<=right;i++)
    {
    arr[i]=temp[i];
    }
    return count;
}
int Mergesort(int arr[],int temp[],int l,int r)
{
    int mid,count=0;
    if(r>l)
    {
        mid=(l+r)/2;
        count+=Mergesort(arr,temp,l,mid);
        count+=Mergesort(arr,temp,mid+1,r);
        count+=Merge(arr,temp,l,mid+1,r);
    }
    return count;
}
int mergesort(int arr[],int n)
{
    int temp[n];
    return Mergesort(arr,temp,0,n-1);


}



int main()
{
    int no_of_inversions;

    int arr[5]={1,20,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    no_of_inversions=mergesort(arr,n);
    cout<<no_of_inversions;


}
