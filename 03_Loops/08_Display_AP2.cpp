/*
Display this AP - 4,7,10,13,16...upto'n' terms. */
// Method 1

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter n : ";
    cin >> n;
    for(i=4; i<=3*n+1; i+=3)
    {
        cout << i << " ";
    }
}