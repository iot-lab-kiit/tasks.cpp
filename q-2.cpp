

#include<iostream>

using namespace std;

//Function prototying for the function area.

float volume(int);

float volume(int,int);

float volume(float,float,float);

//defining the area function.

//sphere

float volume(int r1)
{
       return((4*3.14*r1*r1*r1)/3);
}

//cylinder

float volume(int r,int h)
{
        return(3.14*r*r*h);
}

//cuboid

float volume(float l,float w,float h)
{
        return (l*w*h);
}

int main()
{
        float r,h,l,w;
        int ch;

        do
        {
                cout<<"\n Enter.. to find  \n";

                cout<<"\n 1. volume of sphere";
                cout<<"\n 2. volume of cylinder";
                cout<<"\n 3. volume of cube";

                cout<<"\n 4. Exit from the program ";

                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n enter the radius for sphere: ";
                                cin>>r;
                                cout<<"\n volume of sphere is : "<<volume(r);
                                break;
                        }


                        case 2:
                        {
                                cout<<"\n enter the radius & height of cylinder : ";
                                cin>>r>>h;
                                cout<<"\n volume of cylinder is : "<<volume(r,h);
                                break;
                        }

                        case 3:
                        {
                                cout<<"\n enter the length, width and height for the cuboid : ";
                                cin>>l>>w>>h;
                                cout<<"\n volume of cuboid : "<<volume(l,w,h);
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
