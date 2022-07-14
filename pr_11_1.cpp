#include<iostream.h>
#include<conio.h>
class base
{
public:
int baseA;
void disp3()
{
cout<<"base class baseA:"<<baseA<<endl<<endl;
}
};
class derived
{
public:
int derivedD;
void disp2()
{
cout<<"derived class derivedD:"<<derivedD<<endl;
}
};

class derived2:public derived,public base
{
public:
int derivedA;
void disp1()
{
cout<<"derived2 class:"<<derivedA<<endl;
cout<<"derived class derivedD:"<<derivedD<<endl;
cout<<"base class baseA:"<<baseA<<endl;
}
};
int main()
{
base a;
derived b;
derived2 c;
clrscr();
a.baseA=5;

//b.baseA=10;
b.derivedD=15;

c.baseA=30;
c.derivedD=20;
c.derivedA=25;

cout<<"1"<<endl;
a.disp3();
cout<<"2"<<endl;
b.disp2();
//b.disp3();
cout<<"3"<<endl;
c.disp1();
c.disp2();
c.disp3();
return 0;
}
