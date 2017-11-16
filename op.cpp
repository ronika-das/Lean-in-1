#include<iostream>
using namespace std;
#include<conio.h>

class info {
      int a;
	  int ans;
	  public:
	  info()
	  { }
	  info(int r)
	  {
	  a=r;
	  }
	  info operator+(info i1);
	  info operator-(info i2);
	  void show()
	  {
	  cout<<"the resukt is:"<<ans<<endl;
	  }
};
info info::operator+(info i1)
{
 info temp;
 temp.ans=a + i1.a;
 return temp;
}
info info ::operator -(info i2)
{
 info temp;
 temp.ans=a-i2.a;
 return temp;
}
int main()
{
 info a1(6), a2(5);
 
 info a3=a1 + a2;
 info a4= a1 - a2;
 a3.show();
 a4.show();
 getch();
 return 0;
 }