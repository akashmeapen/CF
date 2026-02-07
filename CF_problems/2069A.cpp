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
        int a[n - 2];
        for (int i = 0; i < n - 2; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        bool flag = true;
        for (int i = 0; i + 2 < n - 2; i++)
        {
            if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}