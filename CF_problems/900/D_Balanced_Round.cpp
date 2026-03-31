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
        long long n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            sort(arr, arr + n);
            int maxi = 1;
            int count1 = 1;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] - arr[i - 1] <= k)
                {
                    count1++;
                }
                else
                {
                    count1 = 1;
                }
                maxi = max(maxi, count1);
            }
            cout << n - maxi << "\n";
        }
    }
    return 0;
}