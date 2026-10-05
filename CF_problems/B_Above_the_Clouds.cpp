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
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(26, 0);
        for (auto c : s)
        {
            a[c - 'a']++;
        }
        int flag = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (a[i] >= 3)
            {
                flag = 1;
            }
            else if (a[i] == 2 && (s[0] - 'a' != i || s.back() - 'a' != i))
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}