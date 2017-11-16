#include<iostream>
using namespace std;
#include<conio.h>

#include<math.h>
class area1 {
     public:
	 void area(float, float,float);
	 void area(float);
};
int main()
{
 area1 circle, triangle;
 float radius,a,b,c;
 cout<<"Enter radius of circle:";
 cin>>radius;
 circle.area(radius);
 cout<<"\nEnter sides of triangle:";
 cin>>a>>b>>c;
 triangle.area(a,b,c);
 getch();
 return 0;
}

void area1::area(float r)
{
 float a;
 a=3.14 * r * r;
 cout<<"\nArea of circle="<<a;
}
void area1 ::area(float x, float y, float z)
{
  float s,s1;
  if((x+y>=z) && (y+z>=x) && (z+x>=y))
  {
 
 s=(x+y+z) /2;
 
 s1= sqrt(s * (s-x) * (s-y) * (s-z));
 cout<<"Area of triangle ="<<s1;
  }
  else
  {
  cout<<"Triangle is not possible";
  }
  
}