#include<iostream>

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
