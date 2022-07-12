#include <iostream>
#include"mocktest.h"
using namespace std;

int main()
{
    Point c1,c2(2,3),c3(-2,-3),c4;
    c4=Add(c2);
    c4.Display();
    return 0;
}
