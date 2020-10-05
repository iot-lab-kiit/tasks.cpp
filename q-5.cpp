#include <iostream>

using namespace std;
inline int increment(int a)
{
    return(a+1);
}


int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    cout<<increment(n);

    return 0;
}