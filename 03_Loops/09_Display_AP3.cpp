/*
Display this AP - 5,10,15,20...upto'n' terms. */
// Method 2

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter n : ";
    cin >> n;

    int a = 5;
    for(i=1; i<=n; i++)
    {
        cout << a << " ";
        a = a + 5;
    }
}