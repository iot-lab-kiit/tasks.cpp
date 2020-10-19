/*Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay.*/



#include<iostream>
using namespace std;
class employee{
	protected:
		char name[20];
		int id,hr,pay_per_hr;
		float basic,hra,da;
		public:
			void input();
};

//General input function


void employee::input()
{
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter id : ";
	cin>>id;
}

//Regular class derieved from the employee class


class regular:public employee
{
	public:
		void in_regular()
		{
			cout<<"Enter the basic salary : ";
			cin>>basic;
			cout<<"Enter HRA : ";
			cin>>hra;
			cout<<"Enter DA : ";
			cin>>da;
		}
		int calculate()
		{
			float gross1;
			gross1=basic+hra+da;
			return(gross1);
		}
};
//Part time  class derieved from the employee class


class part_time:public employee
{
	public:
		float gross2;
		void in_part()
		{
			cout<<"Enter pay per hr : ";
			cin>>pay_per_hr;
			cout<<"Enter working time(in hr) : ";
			cin>>hr;
		}
		int calculate_per_hr()
		{
			gross2=pay_per_hr*hr;
			return(gross2);
		}
};
int main()
{
	class regular r1;
	r1.input();
	r1.in_regular();
	cout<<"\n\n";
	cout<<"Regular employee salary = "<<r1.calculate()<<endl;
	cout<<"\n\n\n\n";
	class part_time p;
	p.input();
	p.in_part();
	cout<<"\n\n";
	cout<<"The salary per hr of the part time employee = "<<p.calculate_per_hr()<<endl;
	cout<<"\n\n\n\n";
	return 0;
}