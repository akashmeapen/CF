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

        vector<int> a(n);
        vector<int> ones, minus;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 1)
                ones.push_back(i);

            if (a[i] == -1)
                minus.push_back(i);
        }

        int l = -1, r = -1;
        int best = 0;

        if (ones.empty())
        {

            if (minus.size() >= 2)
            {
                l = minus.front();
                r = minus.back();
                best = r - l + 1;
            }
            else if (minus.size() == 1)
            {
                l = r = minus[0];
                best = 1;
            }
        }
        else
        {

            for (int i = 1; i < ones.size(); i++)
            {
                int x = ones[i - 1];
                int y = ones[i];

                int len = y - x + 1;

                if (len > best)
                {
                    best = len;
                    l = x;
                    r = y;
                }
            }

            int first = ones.front();

            for (int x : minus)
            {
                if (x < first)
                {
                    int len = first - x + 1;

                    if (len > best)
                    {
                        best = len;
                        l = x;
                        r = first;
                    }
                    break;
                }
            }

            int last = ones.back();

            for (int i = minus.size() - 1; i >= 0; i--)
            {
                int x = minus[i];

                if (x > last)
                {
                    int len = x - last + 1;

                    if (len > best)
                    {
                        best = len;
                        l = last;
                        r = x;
                    }
                    break;
                }
            }

            if (best == 0)
            {
                l = r = ones[0];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
                a[i] = 0;
        }

        if (l != -1)
        {
            a[l] = 1;
            a[r] = 1;
        }

        for (int x : a)
            cout << x << " ";

        cout << '\n';
    }

    return 0;
}