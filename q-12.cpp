/* 
Write a program which displays a given character, 
n number of times, using a function. When the n value is not provided, 
it should print the given character 80 times. When both the character and 
n value is not provided, it should print ‘*’ character 80 times.
*/

#include <iostream>

using namespace std;

void dispChar(int =80, char ='*'); 


int main() 
{ 
        int n;
        char ch;
        cin>>n>>ch;         
        dispChar();
        dispChar(n,ch);
        
	return 0; 
}

void dispChar(int j,char c)
{
 
 for(int i=0;i<j;i++)
 cout<<c<<"\t";
} 
