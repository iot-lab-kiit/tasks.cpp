//WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.
#include<iostream>
#include<math.h>
using namespace std;


//Function prototying for the function area.

float area(int);

float area(int,int);

float area(float,float);

//defining the area function.

//circle

float area(int r)
{
        return(3.14 * r * r);
}

//Triangle

float area(int b,int h)
{
        return(0.5 * b * h);
}

//Rectangle

float area(float l,float b)
{
        return (l * b);
}

int main()
{
        float b,h,r,l;
        int ch;

        do
        {
                cout<<"\n Enter.. to find  \n";

                cout<<"\n 1. Area of Circle";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Area of Rectangle";

                cout<<"\n 4. Exit from the program ";

                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n enter the radius for circle: ";
                                cin>>r;
                                cout<<"\n area of circle is : "<<area(r);
                                break;
                        }
=======
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



                        case 2:
                        {
                                cout<<"\n enter the base & height of triangle : ";
                                cin>>b>>h;
                                cout<<"\n area of triangle is : "<<area(b,h);
                                break;
                        }

                        case 3:
                        {
                                cout<<"\n enter the length & bredth of rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of rectangle : "<<area(l,b);
                                break;
                        }

                        case 4:
                                exit(0);
                        default:
                                cout<<"\n enter a valid choice ";
                }
                
        }while(ch!=4);

        return 0;
}
=======
    int ch;
    while(1){
    cout<<"\n 1. Area of circle \n"<<"2. Area of reactangle\n"<<"3. Area of triangle\n"<<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            float n;
            cout<<"\nEnter radius: ";
            cin>>n;
            cout<<"\nArea of sphere: "<<area(n);
            break;
        }
        case 2:
        {
            float l,b ;
            cout<<"\nEnter length and bredth of the rectangle: ";
            cin>>l>>b;
            cout<<"Area of Rectangle: "<<area(l,b);
            break;
        }
        case 3:
        {
            float s1,s2,s3;
            cout<<"Enter sides of triangle:";
            cin>>s1>>s2>>s3;
            cout<<area(s1,s2,s3);
            break;
        }
        default:
        cout<<"Invalid Input";
        
    }
    }
return 0;
}

