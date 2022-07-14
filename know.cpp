#include <iostream>
using namespace std;
class temp
{
public:
int Size, i, a[10];
int Positive_Count=0, Negative_Count=0;

void posnega()
{
 cout<<"Please Enter the Size of an Array:";
 cin>>Size;

 cout<<"Please Enter the Array Elements";
 for(i = 0; i < Size; i++)
 {
      cin>>a[i];
 }
 for(i = 0; i < Size; i ++)
 {
   if(a[i] >= 0)
   {
	Positive_Count++;
   }
   else
   {
	Negative_Count++;
   }
 }
 }
void put()
{
 cout<<"Total Number of Positive Numbers in this Array = "<<Positive_Count<<endl;
 cout<<"Total Number of Negative Numbers in this Array = "<<Negative_Count<<endl;
 }
};
int main()
{
temp d;
d.posnega();
d.put();
return 0;
}
