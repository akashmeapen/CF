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
        int n, m, k, x, y;
        cin >> n >> m >> k;
        cin >> x >> y;
        string ans = "Yes\n";
        for (int i = 0; i < k; i++)
        {
            int xx, yy;
            cin >> xx >> yy;
            if ((x + y) % 2 == (xx + yy) % 2)
            {
                ans = "No\n";
            }
        }
        cout << ans;
    }
    return 0;
}