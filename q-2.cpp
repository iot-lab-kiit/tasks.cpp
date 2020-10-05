#include <iostream>

using namespace std;
int volume(int rad)
{
    return((4/3)*3.14*rad*rad);
}
int volume(int a, int b, int c)
{
    return(a*b*c);
}
int volume(int x, int y)
{
    return(3.14*x*x*y);
}


int main()
{
    int ch;
    cout<<"1. Sphere\n"<<"2. Cylinder\n"<<"3. Cuboid\n"<<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            int n;
            cout<<"\nEnter radius: ";
            cin>>n;
            cout<<"\nVolume of sphere: "<<volume(n);
            break;
        }
        case 2:
        {
            int r,h;
            cout<<"\nEnter radius and height: ";
            cin>>r>>h;
            cout<<"Volume of Cylinder: "<<volume(r,h);
            break;
        }
        case 3:
        {
            int l,b,h;
            cout<<"Enter length,breadth,height:";
            cin>>l>>b>>h;
            cout<<volume(l,b,h);
            break;
        }
            
        
    }
    
    
    

    return 0;
}