#include<iostream>
using namespace std;
class Shape
{
    public: double a,b,r;
        void get_data1()
        {
            cin>>r;
        }
        void get_data2()
        {
            cin>>a>>b;
        }
       
        virtual void display_area () = 0;
};
 class Circle:public Shape
{
    public: void display_area ()
    {
        cout<<"Area of Circle = "<<3.14*r*r<<endl;
    }
};
class Triangle:public Shape
{
    public: void display_area ()
    {
        cout<<"Area of triangle = "<<0.5*a*b<<endl;
    }
};
 
class Rectangle:public Shape
{
    public: void display_area ()
    {
        cout<<"Area of rectangle = "<<a*b<<endl;
    }
};
 
int main()
{   
    Circle c;
    Shape *sc = &c;
    cout<<"Enter radius of the circle: ";
    sc->get_data1();
    sc->display_area();
    
    Triangle t;
    Shape *st = &t;
    cout<<"Enter base and altitude: ";
    st->get_data2();
    st->display_area();
     
    Rectangle R;
    Shape *sR = &R;
    cout<<"Enter length and breadth: ";
    sR->get_data2();
    sR->display_area();
    return 0;   
}
