#ifndef DONOR_H_INCLUDED
#define DONOR_H_INCLUDED
class Donor
{
    int dno;
    char dname[10];
    int agegroup;
    char sex;
    char bgroup;
    public:
            Donor();
            {
                dno=0;
             dname="0";
             agegroup=0;
             sex=0;
             bgroup=0;

            }
            Donor(int a=1, char a[10]="XYZ" ,int c=65,char b='m' ,char c='0')
            {
             dno=a;
             strcpy(a,dname);
             agegroup=c;
             sex=b;
             bgroup=c;

            }

            void Display(int c[]);
            void Display(int a);
            void display(int a, char c[]);

};


#endif // DONOR_H_INCLUDED
