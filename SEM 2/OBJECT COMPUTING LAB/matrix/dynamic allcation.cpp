#include <iostream>
using namespace std;
int i;
class Matrix
{
    int *arr;
    int n;
    public:
    Matrix();
    Matrix(int x[],int x);
    void display();
};

Matrix::Matrix()
{

    arr=0;

}
Matrix::Matrix(int b[],int x)
{   arr=new int [n];
    n=x;
    for(i=0;i<n;i++)
    {
       arr[i]=b[i];
    }
}

void Matrix::display()
{
    for(i=0;i<n;i++)
    {
    cout<<arr[i];
    }
}
int main()
{
    int a[]={1,2,3,4,5,6};
    Matrix m(a,6);
    m.display();
    return 0;
}
