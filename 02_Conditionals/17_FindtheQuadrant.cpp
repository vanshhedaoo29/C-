/*
Given a point (x,y), writeba program to find out if
it lies in the 1st quadrant, 2nd quadrant, 3rd quadrant
, 4th quadrant, on x-axis, y-axis or at origin.*/

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x coordinate : ";
    cin >> x;
    cout << "Enter y coordinate : ";
    cin >> y;
    if(x>0 && y>0)
    {
        cout << "Lies in 1st Quadrant";
    }
    else if(x<0 && y>0)
    {
        cout << "Lies in 2st Quadrant";
    }
    else if(x<0 && y<0)
    {
        cout << "Lies in 3rd Quadrant";
    }
    else if(x>0 && y<0)
    {
        cout << "Lies in 4th Quadrant";
    }
    else if(x>0 && y==0)
    {
        cout << "Lies on the X-axis";
    }
    else if(x==0 && y>0)
    {
        cout << "Lies on the Y-axis";
    }
    else
    {
        cout << "Lies on the Origin";
    }
}