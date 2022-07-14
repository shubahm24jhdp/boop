#include<iostream.h>
#include<conio.h>
class base
{
public:

base(int A,int B)
{
cout<<A<<"  "<<B<<endl;
//cout<<"Hello Friend"<<endl;
//cout<<"x:"<<x<<endl;
}
base(int f)
{
cout<<f<<endl;
//cout<<"Hi Evryone:"<<endl;
}
};
class dhruv
{
public:

void show(int d)
{
cout<<d<<endl;
}
void show(int h,int r)
{
cout<<h<<"  "<<r<<endl;
}
   };

int main()
{
clrscr();
dhruv m;
m.show(50);
m.show(100,200);
base d(10);
base a(20,30);

//base c;

return 0;
}
