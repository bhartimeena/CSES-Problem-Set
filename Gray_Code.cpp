// C++ program to generate n-bit Gray codes
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // if (n <= 0)
    // 	return;
    vector<string> arr;

    arr.push_back("0");
    arr.push_back("1");

    int i, j;
    for (i = 2; i < (1 << n); i = i << 1)
    {

        for (j = i - 1; j >= 0; j--)
            arr.push_back(arr[j]);

        // append 0 to the first half
        for (j = 0; j < i; j++)
            arr[j] = "0" + arr[j];

        // append 1 to the second half
        for (j = i; j < 2 * i; j++)
            arr[j] = "1" + arr[j];
    }

    // print contents of arr[]
    for (i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;

    return (0);
}
