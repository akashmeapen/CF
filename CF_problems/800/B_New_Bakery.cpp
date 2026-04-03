#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        if (b < a)
        {
            cout << n * a << endl;
        }
        else
        {
            long long rem = min(b - a, n);
            long long ans = rem * (b + (b - rem + 1)) / 2 + (n - rem) * a;
            cout << ans << endl;
        }
    }
    return 0;
}