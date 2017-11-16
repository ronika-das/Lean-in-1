#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int x);
int main()
{
 int num;
 cout<<"Enter number of which factorial is to found:";
 cin>>num;
 int result=factorial(num);
 cout<<"\nThe result is:"<<result;
 getch();
 return 0;
}

int factorial(int x)
{
 if(x<=1)
 return 1;
 
 else
 return ( x * factorial(x-1));
}