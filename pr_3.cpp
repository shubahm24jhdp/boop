#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
int m=11;
int main()
{
int m=15;
float PI=3.1437595;
clrscr();
cout<<setfill('*')<<setw(10);
cout<<m<<endl;
cout<<::m+m<<endl;
cout<<setprecision(2)<<PI;
return 0;
}
