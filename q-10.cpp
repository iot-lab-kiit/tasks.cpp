/*Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay.*/


//Above program is implemented using constructor
#include<iostream>

#include<string>
using namespace std;
class employee {
protected:
	string name;
	int id;
	float salary;
public:
	void input();
	void display();
};

//General input function


void employee::input()
{
	cout << "Enter name : ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter id : ";
	cin >> id;
}


//display function

void employee::display()
{
	cout << salary << endl;
	return;
}

//Regular class derieved from the employee class


class regular :public employee
{
	float basic, hra, da;
public:
	void in_regular()
	{
		cout << "Enter the basic salary : ";
		cin >> basic;
		cout << "Enter HRA : ";
		cin >> hra;
		cout << "Enter DA : ";
		cin >> da;
	}
	void calculate()
	{
		salary = basic + hra + da;
		return;
	}
};
//Part time  class derieved from the employee class


class part_time :public employee
{
	float hr, pay_per_hr;
public:
	void in_part()
	{
		cout << "Enter pay per hr : ";
		cin >> pay_per_hr;
		cout << "Enter working time(in hr) : ";
		cin >> hr;
	}
	void calculate_per_hr()
	{
		salary = pay_per_hr * hr;
		return;
	}

};
//Here all the necessary inputs are taken and constructor of class is called for assigning values
int main()
{
	class regular r1;
	r1.input();
	r1.in_regular();
	r1.calculate();
	cout << "\n\n";
	cout << "Regular employee salary = "; r1.display();
	class part_time p;
	p.input();
	p.in_part();
	p.calculate_per_hr();
	cout << "\n\n";
	cout << "The salary per hr of the part time employee = "; p.display();
	cout << "\n\n\n\n";
	return 0;

}
