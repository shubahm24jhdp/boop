#include<iostream.h>
#include<conio.h>
int main()
{
int x,y;
int sum,difference,product,modulo;
float quotient;
clrscr ();
cout<<"enter the value of x";
cin>>x;
cout<<"enter the value of y";
cin>>y;
sum=x+y;
difference=x-y;
product=x*y;
modulo=x%y;
quotient=x/y;
cout<<"\nsum="<<sum;
cout<<"\ndifference="<<difference;
cout<<"\nproduct="<<product;
cout<<"\nmodulo="<<modulo;
cout<<"\nquotient="<<quotient;
getch();
return 0;
}
