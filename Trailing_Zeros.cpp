#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if (n < 0) 
        cout<< -1<<endl;
    int count = 0; 
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    cout<<count<<endl;
return(0);
}
