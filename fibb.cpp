#include<iostream>
#include<conio.h>
using namespace std;
int fibb(int num);
int main()
{
 int x;
 cout<<"Enter number of terms:";
 cin>>x;
 for(int i=0;i<x;i++)
 {
   cout<<"\t"<<fibb(i);
 }


 getch();
 return 0;
}

int fibb(int num)
{
 int sum;
 if(num==0)
 return 0;
 else if (num==1)
 return 1;
 else
 return (fibb(num-1) + fibb(num-2));

 
}



