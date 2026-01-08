#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> lol(n + 2, 0);
        for (int x : a)
            lol[x]++;

        int m= 0;
        while (m < n + 1 && lol[m] > 0)
        {
            m++;
        }

        cout << min(m, k - 1) << "\n";
    }
    return 0;
}