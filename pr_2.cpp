#include<iostream.h>
#include<conio.h>
int main()
{
char op;
float num01,num02;
clrscr ();
cout<<"enter an arithemetic opertor";
cin>>op;
cout<<"enter two number as opertors\n";
cin>>num01>>num02;
switch(op)
{
case'+':
cout<<num01<<"+"<<num02<<"="<<num01+num02;
break;
case'*':
cout<<num01<<"*"<<num02<<"="<<num01*num02;
break;
case'%':
cout<<num01<<"/"<<num02<<"="<<num01/num02;
break;
case'-':
cout<<num01<<"-"<<num02<<"="<<num01-num02;
break;
default:
cout<<"ERROR: unsupported ipreator";
}
getch ();
return 0;
}
