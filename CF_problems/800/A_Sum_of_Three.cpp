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
        if (n < 7 || n == 9)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if (n % 3 == 0)
        {
            cout << "1 4 " << n - 5 << "\n";
        }
        else if (n % 3 == 1)
        {
            cout << "1 2 " << n - 3 << "\n";
        }
        else
        {
            cout << "1 2 " << n - 3 << "\n";
        }
    }
    return 0;
}