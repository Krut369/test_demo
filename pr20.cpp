#include<iostream>
using namespace std;

class Employee{
	
	int id;
	static int count;
	public:
		void setdata(void)
		{
			cout<<"Enter id ";
			cin>>id;
			count++;
		}
		void getdata(void)
		{
			cout<<"\nId of Employee is "<<id<<"This is employee number "<<count<<endl  ;
		}
};

int Employee :: count;//default value is zero
int main()
{
	Employee h,k,p;
	
	h.setdata();
	h.getdata();
	p.setdata();	
	p.getdata();	
	k.setdata();
	k.getdata();

	
	return 0;
}
