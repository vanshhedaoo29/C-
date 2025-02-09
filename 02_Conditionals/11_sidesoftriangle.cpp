/*
Take 3 numbers input and tell if they can be the sides
of a triangle*/

#include <iostream>
using namespace std;
int main()
{
    int a, b ,c;
    cout << "Enter 1st side : ";
    cin >> a;
    cout << "Enter 2st side : ";
    cin >> b;
    cout << "Enter 3st side : ";
    cin >> c;
    if (a+b>c && b+c>a && a+c>b) 
    {   
        cout << "Sides are of a Triangle";
    } 
    else 
    {
        cout << "Sides are not of a Triangle";
    }
}