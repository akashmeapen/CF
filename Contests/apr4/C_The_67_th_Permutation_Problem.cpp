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

        vector<int> p;

        int l = 1, r = 3 * n;

        while (l < r)
        {
            p.push_back(l);
            p.push_back(r);
            p.push_back(r - 1);
            l++;
            r -= 2;
        }

        for (int x : p)
            cout << x << " ";
        cout << "\n";
    }
}