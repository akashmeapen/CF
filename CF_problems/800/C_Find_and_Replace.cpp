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
        string s;
        cin >> s;

        unordered_map<char, int> freq;

        for (int i = 0; i < n; i += 2)
        {
            freq[s[i]]++;
        }

        bool ok = true;

        for (int i = 1; i < n; i += 2)
        {
            if (freq[s[i]])
            {
                cout << "NO\n";
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
        }
    }

    return 0;
}