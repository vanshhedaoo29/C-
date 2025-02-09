/*
If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest
of the three*/
#include <iostream>
using namespace std;
int main()
{
    int a, b ,c;
    cout << "Enter age of Ram : ";
    cin >> a;
    cout << "Enter age of Shyam : ";
    cin >> b;
    cout << "Enter age of Ajay : ";
    cin >> c;

    if (a<b) 
    {  
        if(a<c) 
        {
            cout << "Ram is smallest";
        }
        else
        {
            cout << "Ajay is smallest";
        }
    } 
    else 
    {
        if(b<c)
        {
            cout << "Shyam is smallest";
        }
        else
        {
            cout << "Ajay is smallest";
        }
    }
}
