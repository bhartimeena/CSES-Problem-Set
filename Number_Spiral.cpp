// A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

// Your task is to find out the number in row y and column x.

// Input

// The first input line contains an integer t: the number of tests.

// After this, there are t lines, each containing integers y and x.

// Output

// For each test, print the number in row y and column x.

// Constraints
// 1≤t≤105
// 1≤y,x≤109
// Example

// Input:
// 3
// 2 3
// 1 1
// 4 2

// Output:
// 8
// 1
// 15

// Code in CPP-
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    li x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                li r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                li r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                li r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                li r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << endl;
            }
        }
    }
    return 0;
}
