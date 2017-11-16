#include<iostream>
using namespace std;
#include<conio.h>
inline int large(int a, int b, int c)
{
 if(a>=b && a>=c)
  return a;
  else if(b>=c)
  return b;
  else
  return c;
}
int main()
{
 int x,y,z;
 cout<<"Enter three numbers:";
 cin>>x>>y>>z;
 int l=large(x,y,z);
 cout<<"\n"<<l<<"is the largest number of the three";
 getch();
 return 0;
}