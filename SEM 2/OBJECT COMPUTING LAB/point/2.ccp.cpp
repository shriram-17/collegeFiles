#include<iostream>
using namespace std;
/*class empty{};
int main()
{
    empty a,b;
    if(&a==&b)
    cout<<"Imppossible"<<endl;
    else
    cout<<"Fine";
}*/
/*class Base {
public:
 Base(int a) : member(a)
 {
 cout << "Base constructor called with " << a << endl;
 }
private:
 int member;
};
void test(Base obj1)
{
 cout << "Base object's member = " << obj1.member;
}

int main()
{
 test(333);
}

class A
{
public:
    A() { cout << "A's Constructor Called " << endl;  }
    void display(int a,int b){cout<<a<<b<<endl;}
};

class B
{
    static A a;
public:
    B() { cout << "B's Constructor Called " << endl; }
};

int main()
{
    B b;
   static A a;
   a.display(4,5);
   a.display(4,6);

    return 0;
}*/
{
    int x;

class B
{
    static A a;
public:
    B() { cout << "B's constructor called " << endl; }
    static A getA() { return a; }
};

A B::a;

int main()


class A
{
    int x;

class B
{
    static A a;
public:
    B() { cout << "B's constructor called " << endl; }
    static A getA() { return a; }
};

A B::a;

int main()
{
    B b1, b2, b3;
   A a=b1.getA();

    return 0;
}
public:
    A() { cout << "A's constructor called " << endl;  }
};
{
    B b1, b2, b3;
   A a=b1.getA();

    return 0;
}
public:
    A() { cout << "A's constructor called " << endl;  }
};

class B
{
    static A a;
public:
    B() { cout << "B's constructor called " << endl; }
    static A getA() { return a; }
};

A B::a;

int main()
{
    B b1, b2, b3;
   A a=b1.getA();

    return 0;
}
