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
        vector<int> even, odd;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }
        if (odd.size() >= 3)
        {
            cout << "YES\n";
            cout << odd[0] << " " << odd[1] << " " << odd[2] << "\n";
        }
        else if (even.size() >= 2 && odd.size() >= 1)
        {
            cout << "YES\n";
            cout << odd[0] << " " << even[0] << " " << even[1] << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}