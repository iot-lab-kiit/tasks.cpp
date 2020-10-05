/*
    WAP to find square and cube of a number using inline function.
*/

#include<iostream>
using namespace std;

inline int square(int n){
    return n*n;
}

inline int cube(int n){
    return n*n*n;
}

int main(){
    int number;
    cout<<"Number: ";
    cin>>number;

    cout<<"Square of "<<number<<" is "<<square(number)<<endl;
    cout<<"Cube of "<<number<<" is "<<cube(number)<<endl;

    return 0;
}