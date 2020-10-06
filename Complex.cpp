
Aditya Srivastava <abdaditya@gmail.com>
Fri, Feb 21, 9:14 PM
to me

#include<iostream>
#include<math.h>
using namespace std;
class Complex
{
    double real,imag;
    public:
    void setReal(double);
    void setImag(double);
    double getReal()
    {
      return real;  
    }
    double getImag()
    {
        return imag;
    }
    void add(Complex ,Complex );
   Complex & mcomplex(Complex &, Complex &);
};
void Complex::setReal(double a)
{
    real=a;
}
void Complex::setImag(double a)
{
    imag=a;
}
void Complex::add(Complex c1,Complex c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}
Complex & Complex::mcomplex(Complex &c1,Complex &c2)
{
    double magnitude1,magnitude2;
    magnitude1=c1.real*c1.real+c1.imag*c1.imag;
    magnitude2=c2.real*c2.real+c2.imag*c2.imag;
    if (magnitude1>magnitude2)
    return c1;
    else
    return c2;
}
int main() 
{
	double r,i,r1,i1;
	Complex c1,c2,c3;
	cin >> r >> i;
	c1.setReal(r);
	c1.setImag(i);
	cin >> r1 >> i1;
	c2.setReal(r1);
	c2.setImag(i1);
	c3.add(c1,c2);
  Complex   &c4=c4.mcomplex(c1,c2);
	cout << c3.getReal() <<" + i" << c3.getImag() << endl;
	cout << c4.getReal() <<" + i" << c4.getImag() << endl;
	return 0;
}