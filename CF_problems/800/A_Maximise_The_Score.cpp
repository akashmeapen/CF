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
        vector<long long> a(2 * n);
        long long score = 0;
        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < 2 * n; i += 2)
        {
            score += a[i];
        }
        cout << score << endl;
    }

    return 0;
}