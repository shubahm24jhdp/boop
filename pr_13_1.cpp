#include<iostream.h>
#include<conio.h>

int main(void)
{
int & min(int &,int &);
int val1,val2;
clrscr();
cout<<"enter value-1:";
cin>>val1;
cout<<"enter value-2:";
cin>>val2;
min(val1,val2)=0;
cout<<"after clling main() function"<<endl;
cout<<"the value of val1 is:"<<val1<<endl;
cout<<"the value of val2 is:"<<val2;
getch();
return (0);
}
int & min(int  &var1,int &var2)
{
if(var1<var2)
return var1;
else
return var2;
}
