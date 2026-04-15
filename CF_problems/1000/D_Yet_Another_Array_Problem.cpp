#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long x = a[0];
        for (long long i = 0; i < n; i++)
        {
            x = __gcd(x, a[i]);
        }
        for (long long i = 2; i < 100000; i++)
        {
            if (__gcd(x, i) == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}