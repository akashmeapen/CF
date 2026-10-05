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
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1, 0);
        int cur = 1;

        for (int i = k; i <= n; i += k)
        {
            a[i] = cur++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = cur++;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}