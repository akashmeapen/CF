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
        int n, a, q;
        cin >> n >> a >> q;
        int sum = a;
        bool flag = false;
        while (q--)
        {
            if (a == n)
                flag = true;
            char c;
            cin >> c;
            if (c == '+')
                sum++, a++;
            else
                a--;
        }
        if (a == n)
            flag = true;
        if (sum < n)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (flag)
                cout << "YES" << endl;
            else
                cout << "MAYBE" << endl;
        }
    }
}