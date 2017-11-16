#include<iostream>
#include<conio.h>
using namespace std;
class base {
   
    public:
	void print()
	{
	  cout<<"Hello World"<<endl;
	}
};
int main()
{
  base b;
  b.print();
  getch();
  return 0;
}