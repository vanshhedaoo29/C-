// Ques: Take positive integer input and tell if it is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    if(n%2==0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number \n";
        cout << "Wow!";
    } 
}