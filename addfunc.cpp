  #include<iostream>
#include<conio.h>
using namespace std;
class calc {
      
	  public:
	  void add(int,int);
	  
	  void add(float, float);
	  void sub(int , int);
	  void sub(float, float);
	  
	  void mul(int, int);
	  void mul(float, float);
	  
	  void div(int, int);
	  void div(float, float);

	  
};
void calc::add(int a, int b)
{
 int sum;
 sum=a+b;
 cout<<sum;
}

void calc::add(float a, float b)
{
 float sum;
 sum=a+b;
 cout<<sum;
}
void calc::sub(int r, int s)
{
 int sum=r+s;
 cout<<sum;
}
void calc::sub(float r, float s)
{
 float minus;
 minus=r+s;
 cout<<minus;
}


void calc::mul(int x, int y)
{
	int mul;
	mul=x*y;
	cout<<mul;
}

void calc::mul(float x, float y)
{
	double mul;
	mul=x*y;
	cout<<mul;
}

void calc::div(int p, int q)
{
	int div=p/q;
	cout<<div;
}
void calc::div(float p, float q)
{
	double div=p/q;
	cout<<div;
}

int main()
{ 

 calc c1;
 //Addition
 
 c1.add(4.3, 6.5);
 c1.add(4,2);
 
 c1.sub(3.2, 8.3);
 c1.sub(2,8);
 
 
 c1.mul(3, 11);
 c1.mul(2.4, 9.5);
 
 
 c1.div(4.6,2.3);
 
 c1.div(7,2);
 getch();
 return 0;
}
 
 