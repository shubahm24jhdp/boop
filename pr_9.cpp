#include<iostream.h>
#include<conio.h>
class firstclass
{
friend class secondclass;
public:
firstclass()
{
x=0;
}
void put()
{
cout<<x<<endl;
}
private:
int x;
};
class secondclass
{
public:
void change(firstclass& abc,int y)
{
abc.x=y;
}
};
int main()
{
firstclass d;
secondclass h;
clrscr();
d.put();
h.change(d,10);
d.put();
return 0;
}
