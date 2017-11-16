#include<iostream>
using namespace std;
#include<conio.h>
class A {
	public:
	A()
	{
		cout<<"\nConstructor A"<<endl;
	}
};
class B:public A {
	public:
	B()
	{
		cout<<"\nConstructor B"<<endl;
	}
};
class C :public B{
	public:
	C()
	{
		cout<<"\nConstructor C"<<endl;
	}
};
int main()
{
	A a1;
	cout<<endl;
	B b1;
	cout<<endl;
	
	C c1;
	
	getch();
	return 0;
	
}