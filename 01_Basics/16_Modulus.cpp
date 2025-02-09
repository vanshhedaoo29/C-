#include <iostream>
using namespace std;
int main()
{
    int x = 8;
    int y = 3;
    cout << x % y;
}

/* Some Important points about Modulus
        1. a % b = a     (if a < b)
        2. a % a = 0
        3. a % (-b) = a % b
        4. (-a) % b = -(a % b)*/