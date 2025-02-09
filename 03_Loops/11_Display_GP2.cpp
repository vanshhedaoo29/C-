// Display this GP- 3,12,48,..upto 'n' terms.

#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int n, i;
    cout << "Enter n : ";
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cout << a << " ";
        a = a * 4;
    }
}