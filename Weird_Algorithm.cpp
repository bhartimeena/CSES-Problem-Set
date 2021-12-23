#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;  // take an integer input
    cin >> n;
    cout << " " << n;
    while (n != 1)
    {
        if (n % 2 == 0) // check if it is even or not if even then do n/2;
        {
            n = n / 2;
        }
        else   
        {
            n *= 3; // if odd then we multiply the given integer form three.
            n++;
        }
        cout << " " << n;
    }

    return (0);
}
