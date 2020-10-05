#include<iostream>  
using namespace std; 
   
int x=5;  // Global variable 
   
int main() 
{ 
  int x = 10; // Local variable
  
  /*
  The scope resolution operator allows us to use the Global variable
  In the below example the Global variable x has value of 5 and can
   be accessed using scope resolution operator. 
  */
  cout << "The value of the Global variable is: " << ::x <<endl; 
  
  /*
  The Local variable has only the scope of the block or function in 
  they are declared. In this case the Local variable x has value of 10
  */
  cout << "The value of the Local variable is: " << x;   
  
  return 0; 
} 
