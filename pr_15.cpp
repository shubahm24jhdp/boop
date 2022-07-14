#include<iostream.h>
#include<conio.h>
class shape
{
public:
float dh;

void getdata()
{
cout<<"enter th value:";
cin>>dh;
}
virtual void show()=0;
};
class derived:public shape
{
public:
float a;
void show()
{
a=dh*dh;
cout<<"ans is:"<<a<<endl;
}
};
class derived2:public shape
{
public:
float b;
void show()
{
b=3.14*dh*dh;
cout<<"d2 ans is:"<<b<<endl;
}
};
int main()
{
derived d;
derived2 h;
clrscr();
d.getdata();
h.getdata();
d.show();
h.show();
return 0;
}
