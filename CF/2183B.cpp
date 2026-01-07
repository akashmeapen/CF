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
        int a, b;
        cin >> a >> b;
        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        bool allZero = true;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] != 0)
            {
                allZero = false;
                break;
            }
        }
        if (allZero)
        {
            cout << 1 << "\n";
        }
        else if (a % 2 == 0)
        {
            cout << arr[a / 2] << "\n";
        }
        else
        {
            cout << arr[int(a / 2)] << "\n";
        }
    }
}