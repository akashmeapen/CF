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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int score = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (auto e : mp)
        {
            if (e.second > 1)
            {
                score += e.second / 2;
            }
        }
        cout << score << "\n";
    }
    return 0;
}