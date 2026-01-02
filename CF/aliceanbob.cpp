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
        int n, a;
        cin >> n >> a;
        vector<int> arr(n);
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (a > arr[i])
            {
                ++l;
            }
            if (a < arr[i])
            {
                ++r;
            }
        }
        if (l > r)
        {
            cout << a - 1 << endl;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }
    return 0;
}