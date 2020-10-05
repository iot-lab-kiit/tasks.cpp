/*Write a program to create a class called COMPLEX and implement the following overloading functions ADD that return a COMPLEX number.
ADD (a , s2) - where a is an integer (real part) and s2 is a complex number.
ADD (s1, s2) - where s1 and s2 are complex numbers.*/

#include<iostream>
using namespace std;

class complex
{
    public:
    float real;
    float img;
    complex ADD(complex s2)   
    {
        complex sum;
        sum.real=real+s2.real;
        sum.img=img+s2.img;
        return sum;
    }
    complex ADD(int a)
    {
        complex sum;
        sum.real=a+real;
        sum.img=img;
        return sum;
    }
};

int main()
{
    complex s1,s2,sum;
    int a;
    cout<<"Enter integer"<<endl;
    cin>>a;
    cout<<"Enter 1st Complex no."<<endl;
    cout<<"Enter real part"<<endl;
    cin>>s1.real;
    cout<<"Enter img part"<<endl;
    cin>>s1.img;
    cout<<"Enter 2nd Complex no."<<endl;
    cout<<"Enter real part"<<endl;
    cin>>s2.real;
    cout<<"Enter img part"<<endl;
    cin>>s2.img;
    cout<<"Sum of integer and complex"<<endl;
    sum=s1.ADD(a);                              //Calling the overloaded function
    cout<<sum.real<<" "<<sum.img<<endl;
    cout<<"Sum of two complex no."<<endl;
    sum=s1.ADD(s2);                             //Calling the overloaded function
    cout<<sum.real<<" "<<sum.img<<endl;
    return 0;

}
