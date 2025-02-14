/*
Take the input percentage of a student and print the grade
according to marks:
1. 81-100 Very Good
2. 61-80 Good
3. 41-60 Average
4. <=40 Fail
*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter percentage : ";
    cin >> m;

    if(m<=100 && m>= 81)
    {
        cout << "Result : Very Good ";
    }

    else if(m<=80 && m>= 61)
    {
        cout << "Result : Good ";
    }

    else if(m<=60 && m>= 41)
    {
        cout << "Result : Average ";
    }

    else
    {
        cout << "Result : Fail ";
    }
}