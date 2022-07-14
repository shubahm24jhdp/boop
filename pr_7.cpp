#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

class student{
public:

int r_no;
char name[20];
int age;
char br[10];

void getdata()
{
cout<<"enter your roll no:"<<endl;
cin>>r_no;
cout<<"enter your name:"<<endl;
cin>>name;
cout<<"enter your age:"<<endl;
cin>>age;
cout<<"enter your br:"<<endl;
cin>>br;
}
void display()
{
cout<<"roll no:"<<r_no<<endl<<endl;
cout<<"name:"<<name<<endl<<endl;
cout<<"age:"<<age<<endl<<endl;
cout<<"branch:"<<br<<endl<<endl;
}
};
int main()
{
student s[10];
clrscr();
cout<<"getdata"<<endl;
for(int i=0;i<5;i++)
s[i].getdata();
cout<<"display"<<endl;
for(i=0;i<5;i++)
s[i].display();
return 0;
}
