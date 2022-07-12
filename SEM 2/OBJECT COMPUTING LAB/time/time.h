#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
class Time
{
    int h;
    int m;
    int s;
    public:
    Time();
    Time (int a,int b,int c);
    Time operator+(Time a);
    bool operator<(Time b);
    void print();

};


#endif // TIME_H_INCLUDED
