// Usage of Type Casting
// Que : Take integer 'x' as input and print half of the number.

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    float y = (float)x;  // Typecasting
    cout << y/2;
}