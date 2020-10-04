#include<iostream>  
using namespace std; 
   
int x;  
   
int main() 
{ 
  int x = 35; 
  cout << "Value of global x is " << ::x; 
  cout << "\nValue of local x is " << x;   
  return 0; 
} 
