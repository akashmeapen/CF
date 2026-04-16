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
        vector<long long> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if ((v[0] + v[1] + v[2]) % 2)
        {
            cout << -1 << "\n";
        }
        else if (v[0] + v[1] < v[2])
        {
            cout << v[0] + v[1] << "\n";
        }
        else
        {
            cout << (v[0] + v[1] + v[2]) / 2 << "\n";
        }
    }
    return 0;
}