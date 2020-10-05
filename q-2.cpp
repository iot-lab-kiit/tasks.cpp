//WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.
#include<bits/stdc++.h>
    using namespace std;
    float vol(float);
    float vol1(int,int);
    int vol2(int);
    int main()
    {
        int r,h,a;
        float r1;
        //Enter radius of sphere: ";
        cin>>r1;
        //Enter radius and height of a cylinder:";
        cin>>r>>h;
        //Enter side of cube:";
        cin>>a;
         cout<<"\nVolume of sphere is "<<vol(r1)<<"\n";
        cout<<"Volume of cylinder is "<<vol1(r,h)<<"\n";
        cout<<"\nVolume of cube is "<<vol2(a)<<"\n";
       
        return 0;
    }
    float  vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    float vol1(int r,int h)
    {
        return(3.14*r*r*h);
    }
    
    int vol2(int a)
    {
        return(a*a*a);
    }
    
