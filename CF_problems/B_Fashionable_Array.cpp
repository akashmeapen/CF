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
        int n;
        cin >> n;

        vector<int> freq(101, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int maxfreak = 0;

        for (int x = 1; x <= 100; x++)
        {
            maxfreak = max(maxfreak, freq[x]);
        }

        vector<int> ans;

        for (int occurrence = 1; occurrence <= maxfreak; occurrence++)
        {

            for (int x = 100; x >= 1; x--)
            {
                if (freq[x] >= occurrence)
                {
                    ans.push_back(x);
                }
            }
        }

        for (int e : ans)
        {
            cout << e << " ";
        }

        cout << '\n';
    }

    return 0;
}