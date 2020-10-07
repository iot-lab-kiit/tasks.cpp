 #include<iostream>
    using namespace std;
    float vol(int,int);
    float vol(float);
    int vol(int,int,int);
     
    int main()
    {
        int r,h,a,b,c;
        float r1;
        cout<<"Enter radius of sphere: ";
        cin>>r1;
        cout<<"Enter radius and height of a cylinder:";
        cin>>r>>h;
        cout<<"Enter length, breadth and height of cuboid:";
        cin>>a>>b>>c;
         cout<<"\nVolume of sphere is "<<vol(r1);
        cout<<"\nVolume of cylinder is "<<vol(r,h);
        cout<<"\nVolume of cuboid is "<<vol(a,b,c);
       
        return 0;
    }
    float vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    float vol(int r,int h)
    {
        return(3.14*r*r*h);
    }
    
    int vol(int a,int b,int c)
    {
        return(a*b*c);
    }
