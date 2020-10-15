#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
public:
    complex(){}
    complex(int, int);
    complex add(int, complex);
    complex add(complex, complex);
    void display();
};

complex::complex(int r, int i)
{
    real=r;
    imag=i;
}

complex complex::add(int a, complex s2)
{
    real=s2.real+a;
    imag=s2.imag;
}

complex complex::add(complex s1, complex s2)
{
    real=s1.real+s2.real;
    imag=s1.imag+s2.imag;
}


void complex::display()
{
    cout<<real<<" + i"<<imag<<endl;
}

int main()
{
    complex s1(5, 6);
    complex s2(8, 3);
    complex s3, s4;
    int a;
    cout<<"enter an integer value:"<<endl;
    cin>>a;
    s3.add(a, s2);
    cout<<"on adding integer value:"<<endl;
    s3.display();

    s4.add(s1, s2);
    cout<<"on adding the two numebers:"<<endl;
    s4.display();
}
