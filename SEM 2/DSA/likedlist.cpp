#include<iostream>
#include<string.h>

using namespace std;
typedef struct Banker
{
    int accno;
    char name[10];
    int balance;
    Banker *link;
}Banker;
Banker*ptr,*start;
void creation(int x,char w[10],int n )
{
    Banker*b=new Banker;
    b->accno=x;
    strcpy(b->name,w);
    b->balance=n;
    b->link='\0';
    start=b;
}
void insertiontomiddle(int pos,int y,char w[10],int a)
{
    ptr=start;
    Banker*n=new Banker;
    n->accno=y;
    n->name=w;
    n->balance=a;
    while(ptr!=NULL)
    {
    if(ptr->accno==pos)
        {

        }
    }


}
void display()
{
    ptr=start;
    while(ptr!=NULL)
    {
    cout<<ptr->accno<<endl;
    cout<<ptr->balance<<endl;
    cout<<ptr->name;
    ptr=ptr->link;
    }
}
int main()
{
    int a,b,i;
    char w[10];
    cout<<"\nEnter the account number:";
    cin>>a;
    cout<<"\nEnter the balance:";
    cin>>b;
    cout<<"\nEnter the Name:";
    cin>>w;
    creation(a,w,b);
    for(i=0;i<4;i++)
    {
    insertomiddle()

    }
    display();
}
