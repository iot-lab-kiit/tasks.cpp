//WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.

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
        int l,b;
        float r,bs,ht;
        cout<<"Enter length and breadth of rectangle:"<<endl;
        cin>>l>>b;
        cout<<"Enter radius of circle:"<<endl;
        cin>>r;
        cout<<"Enter base and height of triangle:"<<endl;
        cin>>bs>>ht;
        cout<<"\nArea of rectangle is "<<area(l,b);
        cout<<"\nArea of circle is "<<area(r);
        cout<<"\nArea of triangle is "<<area(bs,ht);
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
   return((bs*ht)/2.0);
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
