/*Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay.*/


//Above program is implemented using constructor
#include<iostream>
#include<string.h>
using namespace std;
//class employee with id name and salary
class employee
{
    protected:
    int id;
    char name[10];
    float salary;
    public:
     employee(int i,char *n,float sal)
     {
         id=i;
         strcpy(name,n);
         salary=sal;
     }
     //Function to display
     void display()
     {
         cout<<"Id of the employee is:"<<id<<endl;
         cout<<"Name of the employee is:"<<name;
     }
     ~employee()
     {}
};
//regular is the child class of employee
class regular:public employee
{
    float DA;
    float HRA;
    float b_salary;
    public:
     regular(int i,char *n,float sal,float da,float hra,float b_sal):employee(i,n,sal)
     {
         DA=da;
         HRA=hra;
         b_salary=b_sal;
     }
     void calc()
     {
        salary=DA+HRA+b_salary;
     }
     void display()
     {
         cout<<"The salary of the regular emplayee is:"<<salary<<endl;;
     }
     ~regular()
     {}
};
//part_time is the child class of employee with public mode of inheritance
class part_time:public employee
{
    int hr;
    float p_perhr;
    public:
     part_time(int i,char *n,float sal,int h,float p):employee(i,n,sal)
     {
         hr=h;
         p_perhr=p;
     }
     void calc()
     {
         salary=p_perhr*hr;
     }
     void display()
     {
         cout<<"EXtra hour of the employee is:"<<hr<<endl;
         cout<<"salary  of the employee is:"<<salary<<endl;;
     }
     ~part_time()
     {}
};
//Here all the necessary inputs are taken and constructor of class is called for assigning values
int main()
{
    int i;
    char n[10];
    float sal,p,da,hra,b_sal;
    int h;
    cout<<"Enter the id of the employee"<<endl;
    cin>>i;
    cout<<"Enter the name of the employee:"<<endl;
    cin>>n;
    cout<<"Enter the DA of the employee"<<endl;
    cin>>da;
    cout<<"Enter the HRA of the employee:"<<endl;
    cin>>hra;
    cout<<"Enter the b_salary of the employee:"<<endl;
    cin>>b_sal;
    cout<<"Enter the extrahour of the employee"<<endl;
    cin>>h;
    cout<<"Enter the pay per hour (salary) of the employee:"<<endl;
    cin>>p;
    regular r(i,n,sal,da,hra,b_sal);
    part_time pa(i,n,sal,h,p);
    r.calc();
    pa.calc();
    cout<<"Displaying for employee:"<<endl;
    r.employee::display();
    cout<<"\n\nDisplaying for regular employee->"<<endl;
    r.display();
    cout<<"\nDisplaying for parttime employee->"<<endl;
    pa.display();
    return 0;
}
