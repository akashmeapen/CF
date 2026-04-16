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
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == 'R' && s[i + 1] == 'R')
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans + 2 << "\n";
    }
    return 0;
}