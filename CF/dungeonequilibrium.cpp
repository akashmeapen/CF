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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        // count the freq of same elements and store the count in a variable
        // if the freq is equal to the element like if 2 appears 2 times leave it as it is
        // else if the freq is different, like 1 appears 3 times, then return how many times we have to remove 1 in order to make freq equal to element
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }
        int removals = 0;
        for (auto &p : freq)
        {
            if (p.first < p.second)
            {
                removals += p.second - p.first;
            }
            else if (p.first > p.second)
            {
                removals += p.second;
            }
        }

        cout << removals << "\n";
    }
    return 0;
}