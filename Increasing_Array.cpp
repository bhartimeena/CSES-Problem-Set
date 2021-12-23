// You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

// On each move, you may increase the value of any element by one. What is the minimum number of moves required?

// Input

// The first input line contains an integer n: the size of the array.

// Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

// Output

// Print the minimum number of moves.

// Constraints
// 1≤n≤2⋅105
// 1≤xi≤109
// Example

// Input:
// 5
// 3 2 5 1 7

// Output:
// 5

// Code in CPP-

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n;
    cin >> n;

    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    lli total = 0;
    for (lli i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            total += (arr[i - 1] - arr[i]);
            arr[i] += (arr[i - 1] - arr[i]);
        }
    }
    cout << total;
    return 0;
}
