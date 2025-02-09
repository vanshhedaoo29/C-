// Display this GP- 1,2,4,8,16,32...upto 'n' terms.

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int i, n;
    cout << "Enter n : ";
    cin >> n;
    for(i=1 ; i<=n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
}