#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main()
{
int a,b;
cout<<"Enter a and b:";
cin>>a>>b;
char name[7];
cin>>name;
int m=strlen(name);
cout<<m;
int x=-b;

try {
 if(x!=0)
 {
 int p=a/b;
 cout<<"\nDivision ="<< p;
 }
 else
 {
 throw(x);
 }
}
catch(int i)
{
cout<<"exception caught"<<x;
}
getch();
return 0;

}