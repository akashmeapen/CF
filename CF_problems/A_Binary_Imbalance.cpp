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
        int count0 = 0, count1 = 0;
        for (char c : s)
        {
            if (c == '0')
                count0++;
            else
                count1++;
        }
        if (count1 == n)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}