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
        string s;
        cin >> s;
        bool ok = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                ok = true;
                break;
            }
        }
        if (ok)
            cout << 1 << "\n";
        else
        {
            cout << s.size() << "\n";
        }
    }

    return 0;
}