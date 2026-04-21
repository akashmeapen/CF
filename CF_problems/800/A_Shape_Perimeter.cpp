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
        long long n, m;
        cin >> n >> m;
        long long sum = 0;
        long long x, y;
        cin >> x >> y;
        for (int i = 1; i < n; i++)
        {
            cin >> x >> y;
            sum += x + y;
        }
        cout << 2 * ((2 * m) + sum) << endl;
    }
    return 0;
}