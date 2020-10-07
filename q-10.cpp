/*Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’.
     The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number of hours and pay.*/

#include<iostream>

using namespace std;

class employee
{
protected:
    char name[50];
    int id;
    float sal;
public:
    void input();
};

class regular: public employee
{
    float da, hra, basic;
    void calculate()
    {
        da = 0.75*sal;
        hra = 0.25* sal;
        basic = sal + da + hra;
    }
public:
    void display();
}re;

class part_time: public employee
{
    int hr;
    float pay;
    void calculate()
    {
        pay = sal/730 * hr;
    }
public:
    void input_hr();
    void display();
}pe;

void employee :: input()
{
    cout<<"Enter the name of the employee: ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"Enter the id of the employee: ";
    cin>>id;
    cout<<"Enter the Salary: ";
    cin>>sal;
}

void regular :: display()
{
    calculate();
    cout<<"\nThe name of the employee: "<<name;
    cout<<"\nThe id of the employee: "<<id;
    cout<<"\nThe Salary: "<<sal;
    cout<<"\nThe Basic Salary: "<<basic;
}

void part_time :: display()
{
    calculate();
    cout<<"\nThe name of the employee: "<<name;
    cout<<"\nThe id of the employee: "<<id;
    cout<<"\nThe Salary: "<<sal;
    cout<<"\nThe number of hours worked: "<<hr;
    cout<<"\nThe Pay: "<<pay;
}

void part_time :: input_hr()
{
    cout<<"Enter the number of hours worked hours worked: ";
    cin>> hr;
}

int main()
{
    int n;
    cout<<"Enter the type of employee\n1. Regular\n2. Part Time\nChoose one option: ";
    cin>>n;
    switch(n)
    {
    case 1:
                    re.input();
                    re.display();
                    break;

    case 2:
                    pe.input();
                    pe.input_hr();
                    pe.display();
                    break;

    default:
                    cout<<"Please try again\n";
    }
    return 0;
}
