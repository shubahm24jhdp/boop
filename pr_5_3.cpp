#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
int a=597,b=675;
float c=15.3124;
clrscr();
cout<<"a:"<<setw(10)<<a<<endl;
cout<<"b:"<<setw(10)<<setfill('*')<<b<<endl;
cout<<"c:"<<setprecision('3')<<c<<endl;
return 0;
}
