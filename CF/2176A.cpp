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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cmx = 0;

        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            if (a[i] == mx)
                cmx++;
        }

        int res = n - cmx;
        cout << res << "\n";
    }
    return 0;
}