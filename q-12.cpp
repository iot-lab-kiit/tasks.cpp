/* 
Write a program which displays a given character, 
n number of times, using a function. When the n value is not provided, 
it should print the given character 80 times. When both the character and 
n value is not provided, it should print ‘*’ character 80 times.
*/

#include <iostream>

using namespace std;

void displayChar(int n = 80, char ch = '*')
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    char ch;
    cin >> n >> ch;

    displayChar(n, ch);

    return 0;
}
