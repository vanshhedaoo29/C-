// Take integer input and print the absolute value of that integer.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    if(n>=0)
    {
        cout << n;
    }
    else
    {
        cout << -n;
    }
}

// If you want to change n into its absolute value
// if(n<0)
// n = -n;
// cout << n;