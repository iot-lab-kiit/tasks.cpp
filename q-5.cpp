
/*WAP to increment the value of an argument given to function USING INLINE function.*/

#include<iostream>
using namespace std;

//Inline function for incrementation
inline int increment(int a)
{
    return (++a);
}


int main() 
{ 
    int s;
    cout<<"Enter the value to be incremented:\n";
    cin>>s;
    cout<<"The incremented value is:"<<increment(s)<<"\n";
    return 0; 
}
