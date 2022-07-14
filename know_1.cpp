#include<iostream.h>
#include<conio.h>
int &max(int&,int&);
int main()
{
int a,b,p;
cout<<"ENTER A IS:";
cin>>a;
cout<<"ENTER B IS:";
cin>>b;
clrscr();

//norma call
p=max(a,b);
cout<<"NORMAL CALL->"<<endl;
cout<<"MINIMAM:"<<p<<endl;

//left side call
max(a,b)=0;
cout<<"LEFT SIDE CALL->"<<endl;
cout<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
getch();
return 0;
}
int &max(int &x,int &y)
{
return(x<y?x:y);
}
