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
        int n, x;
        cin >> n >> x;
        int f = -1;
        int l = -1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
            {
                if (f == -1)
                {
                    f = i;
                }
                l = i;
            }
        }
        int len = l - f + 1;
        if (len <= x)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}