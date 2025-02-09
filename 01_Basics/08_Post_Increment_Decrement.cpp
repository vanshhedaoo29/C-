#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    cout << x << endl;         // 5
    cout << x++ << endl;       // 5
    cout << x << endl;         // 6

    int y = 8;
    cout << y << endl;         // 8
    cout << y-- << endl;       // 8
    cout << y << endl;         // 7
}