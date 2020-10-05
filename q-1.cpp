#WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.
#include<bits/stdc++.h>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int l,b;
        float r,base,height;
        cin>>r;
        cin>>l>>b;
        cin>>base>>height;
        cout<<"\nArea of circle is "<<area(r);
        cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of triangle is "<<area(base,height);
}
float area(float r)
{
    return(3.14*r*r);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float base,float height)
{
   return((base*height)/2);
}
