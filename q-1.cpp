//WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.
#include<iostream>
#include<math.h>
using namespace std;
//Area of circle
float area(float r)
{
    float ret=3.14*pow(r,2);
    return ret;
}
//Area of the rectangle
float area(float l,float b)
{
    float ret=l*b;
    return ret;
}
//Area of the triangle
float area(float s1,float s2,float s3)
{
    float t=(s1+s2+s3)/2;
    float ret=sqrt(t*(t-s1)*(t-s2)*(t-s3));
    return ret;
}
int main()
{
    float r,l,b,s1,s2,s3,ac,ab,at;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    cout<<"The area of the circle is"<<area(r)<<endl;
    cout<<"Enter the length and breadth of the rectangle"<<endl;
    cin>>l>>b;
    cout<<"The area of the rectangle is"<<area(l,b)<<endl;
    cout<<"Enter the sides of the triangle"<<endl;
    cin>>s1>>s2>>s3;
    cout<<"The area of the triangle is"<<area(s1,s2,s3)<<endl;
    return 0;

}

