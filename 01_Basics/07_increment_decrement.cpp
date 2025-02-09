#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    x++;                        // Post Increment
    cout << x << endl; // 6
    x--;                        // Post Decrement
    cout << x << endl; // 5
    --x;                        // Pre Decrement
    cout << x << endl; // 4
    ++x;                        // Pre Increment
    cout << x << endl; // 5
}  