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
        long long x, y, k;
        cin >> x >> y >> k;
        if (k % 2 != 0)
        {
            cout << x << " " << y << '\n';
            k--;
        }
        else
        {
            for (long long i = 0; i < k / 2; i++)
            {
                cout << x - 1 << " " << y - 1 << '\n';
                cout << x + 1 << " " << y + 1 << '\n';
            }
        }
    }

    return 0;
}