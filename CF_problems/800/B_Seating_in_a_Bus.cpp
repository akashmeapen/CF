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

        int l = a[0], r = a[0];
        bool ok = true;

        for (int i = 1; i < n; i++)
        {
            if (a[i] + 1 == l)
            {
                l = a[i];
            }
            else if (a[i] - 1 == r)
            {
                r = a[i];
            }
            else
            {
                ok = false;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}