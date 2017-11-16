#include<iostream>
using namespace std;
#include<conio.h>
class A{
	int a;
	public:
	void geta()
	{ 
	 cout<<"Enter a:";
	 cin>>a;
	}
	void showa()
	{
		cout<<a<<endl;
	}
};
class B:private A {
	int b;
	public:
	void getb()
	{
		A::geta();
		cout<<"Enter b:";
		cin>>b;
	
	}
	void show()
	{
		A::showa();
		cout<<b;
	}
};
int main()
{
	B b1;
	b1.getb();
	b1.show();
	getch();
	return 0;
}