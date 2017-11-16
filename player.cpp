#include<iostream>
using namespace std;
#include<conio.h>
class players {
	 char type_of_sport[30];
	 int experience;
	 public:
	 void getdetails()
	 {
		 cout<<"\nEnter type of sport and experience in years";
		 cin>>type_of_sport>>experience;
	 }
	 void show()
	 {
		 cout<<type_of_sport<<"\t"<<experience;
	 }
};

class zonal:virtual public players {
	int zonal_rank;
	public:
	int get()
	{
		cout<<"\nEnter zonal rank:";
		cin>>zonal_rank;
		return zonal_rank;
	}
};
class national:virtual public players {
	int nat_rank;
	public:
	int getit()
	{
		cout<<"\nEnter zonal rank:";
		cin>>nat_rank;
		return nat_rank;
	}
};
class international :public zonal , public national {
	
	public:
	void final1()
	{int rank;
		rank=get() + getit();
		players::show();
		cout<<"\nThe final rank is:"<<rank;
	}
	
};
int main()
{
  international i1;
  i1.getdetails();
  
  i1.final1();
  getch();
  return 0;
}