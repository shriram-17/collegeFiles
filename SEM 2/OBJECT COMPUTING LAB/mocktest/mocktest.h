#ifndef MOCKTEST_H_INCLUDED
#define MOCKTEST_H_INCLUDED

class Point
{
    private:
            int x,y;
    public:
           Point();
           Point (int a,int b);
           Point Add(Point);
           Point Sub(Point);
           Point Mul(int x);
           bool isorgin();
           float Dis(Point);
           void Display();
           void CheckQuaradrant();

};



#endif // MOCKTEST_H_INCLUDED
