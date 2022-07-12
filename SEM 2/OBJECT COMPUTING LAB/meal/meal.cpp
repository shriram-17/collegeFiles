#include<iostream>
#include<string.h>
#include"meal.h"
using namespace std;
Meal::Meal()
{
strcpy(entry,"None");
calorie=0;
}
Meal::Meal(char w[],int x)
{
strcpy(entry,w);
calorie=x;
}
Meal Meal::operator -()
{
    cout<<"Enter the entry:";
    cin>>entry;
    cout<<endl;
    cout<<"Enter the Calorie:";
    cin>>calorie;


}
void Meal::operator *()
{   cout<<endl;
    cout<<entry<<" "<<"Calories Are"<<calorie;
}
Meal Meal::operator+(Meal b)
{
    Meal m;
    strcpy(m.entry,"Daily Total");
    m.calorie=calorie+b.calorie;
    return m;
}
