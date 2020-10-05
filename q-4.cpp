#include<iostream>

using namespace std;

inline int square(int n)
{
    return n*n;
}

inline int cube(int n)
{
    return n*n*n;
}

int main()
{
    int num;
    cout<<"Enter the Number: ";

    cin>>num;

    cout<<"Square of "<<num<<" is "<<square(num)<<endl;

    cout<<"Cube of "<<num<<" is "<<cube(num)<<endl;

    return 0;
} 
