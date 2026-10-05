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
        int n, k;
        cin >> n >> k;
        int ans = 0, y = 0, side = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            int diff = a - y;
            if (side == b)
            {
                ans += (diff / 2) * 2;
            }
            else
            {
                ans += (1 + ((diff - 1) / 2) * 2);
            }
            y = a;
            side = b;
            if (i == n - 1)
            {
                ans += k - y;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}