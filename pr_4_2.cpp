#include<iostream.h>
#include<conio.h>
class employee
{
public:
int Emp_id;
char Emp_name[10];
char Emp_dept[20];

void getdata()
{
cout<<"ENTER id :"<<endl;
cin>>Emp_id;
cout<<"ENTER NAME:"<<endl;
cin>>Emp_name;
cout<<"ENTER DEPARTMENT:"<<endl;
cin>>Emp_dept;
}
void putdata()
{
cout<<"ID="<<Emp_id<<endl;
cout<<"NAME="<<Emp_name<<endl;
cout<<"DEPARTMENT="<<Emp_dept<<endl;
}
};
int main()
{
employee x[50];
int i;
int n;
clrscr();
cout<<"ENTER THE NUMBER:";
cin>>n;
for(i=0;i<n;i++)
{
x[i].getdata();
}
for(i=0;i<n;i++)
{
x[i].putdata();
}
return 0;
}
