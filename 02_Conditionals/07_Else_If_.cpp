/* Given the length and breadth of a rectangle, write a 
program to find whether the area of the rectangle is 
greater than its perimeter. */

#include <iostream>
using namespace std;
int main()
{
    int l, b, A, P;
    cout << "Enter Length : ";
    cin >> l;
    cout << "Enter Breadth : ";
    cin >> b;
    A = l * b;
    P = 2 * (l+b);
    if(A > P)
    {
        cout << "Area of the Rectangle is Greater";
    }
    else
    {
        cout << "Perimeter of the Rectangle is Greater";
    }
}