

#include<iostream>

=======
/*Write a program to create a class called COMPLEX and implement the following overloading functions ADD that return a COMPLEX number.
ADD (a , s2) - where a is an integer (real part) and s2 is a complex number.
ADD (s1, s2) - where s1 and s2 are complex numbers.*/

#include<iostream>

using namespace std;

class complex
{


  int r,i;
  public:
  void read();
  void print();
  friend complex add(int a,complex c);
  friend complex add(complex c1,complex c2);

};


void complex::read()
{
  cout<<"Enter real and imaginary number \n";
  
  cin>>r>>i;
}

void complex::print()
{
  cout<<r<<"+i"<<i<<endl;
}

complex add(int a,complex c)
{
  complex t;
  t.r=a+c.r;
  t.i=c.i;
  return t;
}

complex add(complex c1,complex c2)
{
  complex t;
  t.r=c1.r+c2.r;
  t.i=c1.i+c2.i;
  return t;

}


int  main()
{
   int a=2;
  
   complex s1,s2,s3;
   
   s1.read();
   
   cout<<"\ns1 : ";
   
   s1.print();
   
   s2=add(a,s1);
   
   cout<<"s2 : 2+s1\n";
   
   cout<<"   : ";
   
   s2.print();
   
   s3=add(s1,s2);
   
   cout<<"s3=s1+s2\n";
   
   cout<<"s1 : ";
   
   s1.print();
   
   cout<<"s2 : ";
   
   s2.print();
   
   cout<<"s3 : ";
   
   s3.print();
   
  return 0;
}
=======
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

=======
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
        sum.real=real+s2.real; //addition of the real part
        sum.img=img+s2.img; //addition of the imaginary part
        return sum;
    }
    complex ADD(int a)
    {
        complex sum;
        sum.real=a+real; //addition of the real numbers
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
    sum=s1.ADD(a);                              //Calling the overloaded function ADD
    cout<<sum.real<<" +i"<<sum.img<<endl;
    cout<<"Sum of two complex no."<<endl;
    sum=s1.ADD(s2);                             //Calling the overloaded function ADD
    cout<<sum.real<<" +i"<<sum.img<<endl;
    return 0;

}
