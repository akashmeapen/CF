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
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        int mincoin = 0;

        for (int i = 0; i < n / 2; i++)
        {
            int j = n - i - 1;

            if (s[i] == s[j])
            {
                continue;
            }
            else if (s[i] == c || s[j] == c)
            {
                mincoin += 1;
            }
            else
            {
                mincoin += 2;
            }
        }

        cout << mincoin << '\n';
    }

    return 0;
}