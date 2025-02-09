/*
Take 3 positive integers input and print the greatest
of them. */

#include <iostream>
using namespace std;
int main()
{
    int a, b ,c;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2st number : ";
    cin >> b;
    cout << "Enter 3st number : ";
    cin >> c;

    if (a>b && a>c) 
    {   
        cout << a << " is greatest number";
    } 
    else if(b>a && b>c)
    {
        cout << b << " is greatest number";
    }
    else
    {
        cout << c << " is greatest number";
    }

}

    