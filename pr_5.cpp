#include<iostream.h>
#include<conio.h>
struct student
{
int r_no;
char name[20];
int age;
char br[10];
};
int main()
{
student s;
int i;
int n;
clrscr();
cout<<"enter the number of n:";
cin>>n;
cout<<"enter the student details"<<endl;
for(i=0;i<n;i++)
{
cout<<"enter roll no:";
cin>>s.r_no;
cout<<"enter name:";
cin>>s.name;
cout<<"enter age:";
cin>>s.age;
cout<<"enter branch:";
cin>>s.br;
}
cout<<"declare the student details";
for(i=0;i<n;i++)
{
cout<<"student roll no:"<<s.r_no<<endl;
cout<<"student name:"<<s.name<<endl;
cout<<"student age:"<<s.age<<endl;
cout<<"student branch:"<<s.br<<endl<<endl;
}
return 0;
}
