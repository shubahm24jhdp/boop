#include <iostream.h>
#include<conio.h>
void swap(int &x, int &y)
{
int z;
z=x;
x=y;
y=z;
}
int main ()
{
   int a = 100;
   int b = 200;
   clrscr();
   cout << "Before swap value of a :" << a << endl;
   cout << "Before swap value of b :" << b << endl;
   swap(a, b);
   cout << "After swap value of a :" << a << endl;
   cout << "After swap value of b :" << b << endl;
   return 0;
}
