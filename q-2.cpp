#include<iostream>
    using namespace std;
    float vol(int,int);
    float vol(int);
    int vol(int,int,int);

    int main()
    {
        int r,h,l,b,h1;
        float r1;
        cout<<"Enter radius and height of a cylinder:";
        cin>>r>>h;
        cout<<"Enter radius of sphere: ";
        cin>>r1;
        cout<<"Enter side of cuboid:";
        cin>>l>>b>>h1;
        cout<<"\nVolume of cylinder is "<<vol(r,h);
        cout<<"\nVolume of sphere is "<<vol(r1);
        cout<<"\nVolume of cuboid is "<<vol(l,b,h1);

        return 0;
    }
    float vol(int r,int h)
    {
        return(3.14*r*r*h);
    }
    float vol(int r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    int vol(int l,int b,int h1)
    {
        return(l*b*h1);
    }
