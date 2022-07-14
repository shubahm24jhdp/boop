#include<iostream.h>
#include<conio.h>
class base
{
public:
int baseA;
void disp()
{
cout<<"base class baseA:"<<baseA<<endl;
}
};
class derived:public base
{
public:
int derivedD;
void disp()
{
cout<<"drived class derivedD:"<<derivedD<<endl;
cout<<"from base class:"<<baseA;
}
};
int main()
{
base a;
derived b;
clrscr();
a.baseA=5;
b.derivedD=10;
b.baseA=15;
a.disp();
b.disp();
return 0;
}
