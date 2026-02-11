#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long sumA = 0;
        long long mini = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            sumA += a[i];
            mini = min(mini, a[i] - b[i]);
        }

        cout << sumA - mini << "\n";
    }

    return 0;
}
