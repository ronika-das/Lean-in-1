#include<iostream>
#include<conio.h>
using namespace std;
int count=2;
int main()
{
 int count=3;
  {
    int count=4;
	cout<<"inner block="<<count<<endl;
   }
  cout<<"Outer block="<<count<<endl;
  cout<<"Global vaiable="<<::count;
 getch();
 return 0;
}

