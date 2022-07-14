#include<iostream.h>
#include<conio.h>
class xyz
{
private:
float r,c;
public:
xyz(int a)
{
r=3.14*a*a;
cout<<"radius is:"<<r<<endl;
}
xyz(int b,int c,int d)
{
c=b*c*d;
cout<<"area is:"<<c<<endl;
}
};
int main()
{
int x,y,z,o;
clrscr();
cout<<"value of o:";
cin>>o;
cout<<"value od x y x:";
cin>>x>>y>>z;
xyz D(o);
xyz H(x,y,z);
return 0;
}
