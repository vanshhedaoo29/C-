/*
Display this AP - 1,3,5,7,9...upto'n' terms. */
// Method 1

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter n : ";
    cin >> n;
    for(i=1; i<=2*n-1; i+=2)
    {
        cout << i << " ";
    }
}