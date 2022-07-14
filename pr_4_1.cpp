#include<iostream.h>
#include<conio.h>

inline int Max(int x, int y)
{
return (x > y)? x : y;
}

int main()
{
clrscr();
cout<<"Max (20,150): "<< Max(20,150)<<endl;
cout<<"Max (300,200): "<< Max(300,200)<<endl;
cout<<"Max (1050,1010): "<< Max(1050,1010)<<endl;

return 0;
}
