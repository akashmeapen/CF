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
        vector<long long> a(7);
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long max = a[6];
        for (int i = 0; i < 6; i++)
        {
            max = max - a[i];
        }
        cout << max << "\n";
    }
    return 0;
}