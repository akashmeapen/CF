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

        int odd = 0;
        int evenOdd = 0;
        int evenEven = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if (x % 2 == 1)
                odd++;
            else if ((x / 2) % 2 == 1)
                evenOdd++;
            else
                evenEven++;
        }

        cout << max({odd, evenOdd, evenEven}) << '\n';
    }
}
