#include <iostream>
#include<string.h>
using namespace std;

typedef struct Node
{
    int acc_no;
    char  name[10];
    float balance;
    struct Node * link;
}N;

N *start,*ptr;

void create()
{
    N *n=new N;
    n->acc_no=2243;
    strcpy(n->name,"Hemanth");
    n->balance=76666;
    n->link=NULL;
    start=n;
}

void ins_end(int x,char y[10],float z)
{
    N *n=new N;
    ptr=start;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    n->acc_no=x;
    strcpy(n->name,y);
    n->balance=z;
    ptr->link=n;
    n->link=NULL;
}

void display()
{
    ptr=start;
    int max=0;
    char  nm[10];
    while(ptr!=NULL)
    {
        if(ptr->balance>max)
        {
            max=ptr->balance;
            strcpy(nm,ptr->name);
        }
        //cout<<"Name:"<<ptr->name<<"\n"<<"Account number:"<<ptr->acc_no<<"\n"<<"Balance:"<<ptr->balance<<"\n\n";
        ptr=ptr->link;
    }
    cout<<"Person with maximum balance of  "<<max<<"  is  "<<nm<<"\n\n";
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->balance>12000)
        {
            ptr->balance=(ptr->balance)*1.03;
        }


        if(ptr->balance>10000)
        {
            cout<<"Name:"<<ptr->name<<"\n"<<"Account number:"<<ptr->acc_no<<"\n"<<"Balance:"<<ptr->balance<<"\n\n";
        }
         ptr=ptr->link;

    }
}
int main()
{
    create();
    ins_end(3413,"Gibns",5464);
    ins_end(3673,"nvbn",17675);
    ins_end(6467,"Gjghm",11666);
    ins_end(7575,"hjkg",543534);

    display();

}
