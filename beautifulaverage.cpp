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
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        long long max = INT_MIN;
        for (auto e : a)
        {
            if (e > max)
            {
                max = e;
            }
        }
        cout << max << "\n";
    }
    return 0;
}