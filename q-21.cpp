#include<bits/stdc++.h>
using namespace std;

 int square(int a){
    return a*a;
}

 int cube(int a){
    return a*a*a;
}

int main(){
    int n;
    cin>>n;

    cout<<"Square: "<<n<<" is "<<square(n)<<endl;
    cout<<"Cube: "<<n<<" is "<<cube(n)<<endl;

    return 0;
} 
