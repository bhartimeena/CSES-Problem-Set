#include<iostream>
using namespace std;
const long long M = 1e9+7;
long long ANS(long long x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if(n%2==0)
    {
        long long z = ANS(x,n/2);
        return (z*z)%M;
    }
    long long z = ANS(x,n/2);
    return ((z*z)*x)%M;
}
int main()
{
    int n;
    cin>>n;
    cout<<ANS(2,n)<<endl;
}
