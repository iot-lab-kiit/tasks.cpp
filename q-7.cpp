/*Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by address by taking swapping of two numbers as an example.*/

#include<iostream>
using namespace std;

//Function for Call by value
void swap1(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

//Function for Call by address
void swap2(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

//Function for Call by refernce
void swap3(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}

int main()
{
    cout<<"Enter 2 nos."<<endl;
    int x1,y1;
    cin>>x1>>y1;
    int x,y;

    x=x1;y=y1;
    cout<<"Call by value"<<endl;
    cout<<"Before Swapping"<<endl;
    cout<<x<<"\t"<<y<<endl;
    swap1(x,y);                     //Calling by values
    cout<<"After Swapping"<<endl;
    cout<<x<<"\t"<<y<<endl;

    x=x1;y=y1;
    cout<<"Call by Address"<<endl;
    cout<<"Before Swapping"<<endl;
    cout<<x<<"\t"<<y<<endl;
    swap2(&x,&y);                   //Calling by address
    cout<<"After Swapping"<<endl;
    cout<<x<<"\t"<<y<<endl;

    x=x1;y=y1;
    cout<<"Call by Reference"<<endl;
    cout<<"Before Swapping"<<endl;
    cout<<x<<"\t"<<y<<endl;
    swap3(x,y);                     //Calling by reference
    cout<<"After Swapping"<<endl;
    cout<<x<<"\t"<<y<<endl;
    return 0;
}
