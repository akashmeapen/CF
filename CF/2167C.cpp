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
        int even = 0, odd = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == n || odd == n)
        {
            for (auto e : a)
            {
                cout << e << " ";
            }
        }
        else
        {
            sort(a.begin(), a.end());
            for (auto e : a)
            {
                cout << e << " ";
            }
        }
    }
    return 0;
}