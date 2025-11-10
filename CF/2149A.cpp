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
            cin >> a[i];
        int ops = 0, nominus = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
            {
                nominus++;
            }
            else
            {
                ops += 1 - a[i];
            }
        }
        if (nominus % 2)
        {
            ops += 2;
        }
        cout << ops << "\n";
    }
    return 0;
}