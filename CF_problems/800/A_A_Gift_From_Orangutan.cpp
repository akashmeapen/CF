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
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long maxi = a[0], mini = a[0];
        for (long long i = 1; i < n; i++)
        {
            if (a[i] > maxi)
            {
                maxi = a[i];
            }
            if (a[i] < mini)
            {
                mini = a[i];
            }
        }
        cout << (maxi - mini) * (n - 1) << "\n";
    }
    return 0;
}