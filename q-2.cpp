#include <iostream>

using namespace std;

void volume(float r)
{
    cout<<"\nThe volume of Sphere: "<<((4*22*r*r*r)/(7*3))<<"\n";
}

void volume(float l, float b, float h)
{
    cout<<"\nThe volume of the Cuboid: "<<((l*b*h));
}

void volume(float r, float h)
{
    cout<<"Volume of Cylinder: "<<((22*r*r*h)/7)<<"\n";
}

int main()
{
    int n;
    cout<<"1. Sphere\n2. Cylinder\n3. Cuboid\nEnter your choice: ";
    cin>>n;
    switch(n)
    {
        case 1:
            {
                float r;
                cout<<"\nEnter radius of the sphere: ";
                cin>>r;
                volume(r);
                break;
            }

        case 2:
            {
                float r,h;
                cout<<"\nEnter radius and height of the cylinder: ";
                cin>>r>>h;
                volume(r,h);
                break;
            }

        case 3:
            {
                float l,b,h;
                cout<<"\nEnter length, breadth and height of the cuboid: ";
                cin>>l>>b>>h;
                volume(l,b,h);
                break;
            }

        default:
            cout<<"Please Try Again!\n";
    }

    return 0;
}
