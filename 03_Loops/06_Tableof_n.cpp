/*Print the table of 'n'. Here 'n' is a integer which
user will input*/  

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter n : ";
    cin >> n;
    for(i=n; i<=(10*n); i+=n)
    {
        cout << i << " ";
    }
}
