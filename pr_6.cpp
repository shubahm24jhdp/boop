#include<iostream.h>
#include<conio.h>
class student
{
public:
int Enr_no;
char Std_name[20];
char Std_course[20];
int sub1,sub2,sub3;
void getdata()
{
cout<<"enter enrollment no of student:";
cin>>Enr_no;
cout<<"enter name of student:";
cin>>Std_name;
cout<<"enter course of student:";
cin>>Std_course;
cout<<"enter name of sub1:";
cin>>sub1;
cout<<"enter name of sub2:";
cin>>sub2;
cout<<"enter name of sub3:";
cin>>sub3;
}
void displaydata()
{
 cout<<"student enrollment is:"<<Enr_no<<endl;
 cout<<"student name is:"<<Std_name<<endl;
 cout<<"student course:"<<Std_course<<endl;
 }
void sum()
{
int total;
total=sub1+sub2+sub3;
cout<<"total of mark:"<<total;
}
 };
 int main()
 {
 student s[50];
 int n;
 int i;
 clrscr();
 cout<<"enter number of student detiles:";
 cin>>n;
 for(i=0;i<n;i++)
 {
 s[i].getdata();
 }
 for(i=0;i<n;i++)
 {
 s[i].displaydata();
 s[i].sum();
 }
  return 0;
  }
