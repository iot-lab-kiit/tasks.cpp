//WAP to find the volume of a sphere,Cylinder and a Cuboid using the function overloading concept
#include <iostream>

using namespace std;
int volume(int rad)            //this function returns the VOLUME of SPHERE
{
    return((4/3)*3.14*rad*rad);
}
int volume(int a, int b, int c)   //this function returns the VOLUME of CUBOID
{
    return(a*b*c);
}
int volume(int x, int y)          //this function returns the VOLUME of CYLINDER
{
    return(3.14*x*x*y);
}


int main()                       //main function
{
    int ch;
    cout<<"Please enter your choice as(1,2,3)"<<endl;
    cout<<"1. Sphere\n"<<"2. Cylinder\n"<<"3. Cuboid\n";
    cout<<"Enter your choice: ";

    cin>>ch;
    switch(ch)
    {
        case 1:                        //case for calculating the volume of sphere
        {
            int r;
            cout<<"\nEnter radius: ";
            cin>>r;
            cout<<"\nVolume of sphere: "<<volume(r);
            break;
        }
        case 2:                                        //case for calculating the Volume of CYLINDER
        {
            int r,h;
            cout<<"\nEnter radius of the Cylinder: ";
            cin>>r;
            cout<<"Enter Height of the Cylinder: ";
            cin>>h;
            cout<<"Volume of Cylinder: "<<volume(r,h);
            break;
        }
        case 3:                                               //case for calculating the Volume of Cuboid
        {
            int l,b,h;
            cout<<"Enter length of the Cuboid: ";
            cin>>l;
            cout<<"Enter breadth of the Cuboid: ";
            cin>>b;
            cout<<"Enter height of the Cuboid: ";
            cin>>h;
            cout<<"Volume of the Cuboid: "<<volume(l,b,h);
            break;
        }
        default:                                                    //default case used in case the user enters options other than 1,2,3
            {
                cout<<"Sorry! you entered a wrong choice"<<endl;
                cout<<"Please run the program again."<<endl;
                cout<<"Thank you"<<endl;
                break;
            }


    } //end of switch case




    return 0;
} //end of main function
