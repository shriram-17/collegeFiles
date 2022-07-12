#include <iostream>
using namespace std;
int i;
class Matrix
{
    int arr[3];
    public:
    Matrix();
    Matrix(int x[]);
    void display();
};

Matrix::Matrix()
{
    for(i=0;i<3;i++)
    {
    arr[i]=0;
    }
}
Matrix::Matrix(int a[3])
{
    for(i=0;i<3;i++)
    {
       arr[i]=a[i];
    }
}

void Matrix::display()
{
    for(i=0;i<3;i++)
    {
    cout<<arr[i];
    }
}
int main()
{


    int a[3]={1,2,3};
    Matrix m(a);
    m.display();
    return 0;
}
