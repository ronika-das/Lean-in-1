#include<iostream>
#include<conio.h>
using namespace std;
class A {
	public:
	friend void display();
	void show()
	{
		cout<<"Hello";
	}
	void show2()
	{
		
		cout<<"wubba lubba dub dub";
		
	 
	}
	
};
void display()
{
	cout<<"FRiend function";
}

int main()
{
	A a1;
	a1.show();
	a1.show2();
	display();
	getch();
	return 0;
}

	