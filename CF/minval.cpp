#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum >= 0)
        {
            cout << 0 << endl;
            continue;
        }
        sum = sum * -1;
        if (sum % n == 0)
        {
            cout << sum / n << endl;
        }
        else
        {
            cout << (sum / n) + 1 << endl;
        }
    }
}
