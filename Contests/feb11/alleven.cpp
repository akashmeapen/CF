#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int codd = 0;

        for (int e : a)
        {
            if (e % 2 != 0)
                codd++;
        }

        if (codd % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
