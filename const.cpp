#include<iostream>
using namespace std;
#include<conio.h>

class info1{
     
	 public:
	 int a;
	 info1() { a=0; }
	 
	 info1(int x)
	 {
	 a=x;
	 
	 }
	 info1(info1 &i)
	 {
	  a=i.a;
	  
	 }
	 void display()
	 {
	  
	  cout<<"Contructor"<<": a="<<a<<endl;
	 }
	 ~info1()
	 {
		  
		  cout<<true;
	 }
};
int main()
{
 info1 i1, i2(5), i3(7);
 i1.display();
 i2.display();
 i3.display();
 info1 i4(i3);
 info1 i5=i3;
 i4.display();
 i5.display();
 
 getch();
 return 0;
}