#include<iostream.h>
#include<conio.h>
class base
{
public:

void show(int A,int B)
{
cout<<A<<"  "<<B<<endl;
cout<<"Hello Friend"<<endl;
//cout<<"x:"<<x<<endl;
}
void show(int f)
{
cout<<f<<endl;
cout<<"Hi Evryone:"<<endl;
}
};
int main()
{
clrscr();
base d;
d.show(20,30);
d.show(10);
//base c;
return 0;
}
