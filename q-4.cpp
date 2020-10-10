/* WAP to find square and cube of a number using inline function.*/

#include<iostream>
using namespace std; 


//Inline function to find the cube of the number
inline int cube(int s) 
{ 
    return s*s*s; 
}


//Inline function to find the square of the number
inline int square(int s)
{ 
    return s*s; 
} 

int main() 
{ 
    int s;
    cout<<"Enter the number to find the square amd cube\n";
    cin>>s;
    cout << "The cube of the number is:\n " << cube(s) << "\n"; 
    cout<<"The square of the number is:\n"<< square(s)<<"\n";
    return 0; 
}