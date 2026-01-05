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
        int count = 0;
        for (auto &c : s)
        {
            if (c == '1')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}