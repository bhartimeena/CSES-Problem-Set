#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int i = n - 1, j = m - 1;

    int applicants = 0;

    while (i >= 0 && j >= 0)
    {

        if (b[j] < a[i] - k)
            i--;
        else if (b[j] > a[i] + k)
            j--;
        else
        {
            applicants++;
            i--;
            j--;
        }
    }
    cout << applicants << endl;
}
