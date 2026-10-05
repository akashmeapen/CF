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
        int n;
        int k;
        cin >> n >> k;
        string s;
        cin >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        char mini = *min_element(s.begin(), s.end());
        char maxi = *max_element(s.begin(), s.end());
        if (s < rev || (k >= 1 && mini != maxi))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}