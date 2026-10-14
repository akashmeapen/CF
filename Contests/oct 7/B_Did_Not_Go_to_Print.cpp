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

        string s;
        cin >> s;

        vector<int> st;
        vector<bool> lol(n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
            {

                st.push_back(i);
            }
            else if (s[i - 1] == '2')
            {
                if (!st.empty())
                {

                    int doc = st.back();
                    st.pop_back();

                    lol[doc] = true;
                }
                else
                {
                    lol[i] = true;
                }
            }
            else
            {

                lol[i] = true;
            }
        }

        vector<int> res;

        for (int i = 1; i <= n; i++)
        {
            if (!lol[i])
                res.push_back(i);
        }

        cout << res.size() << '\n';

        for (auto e : res)
            cout << e << ' ';

        cout << '\n';
    }

    return 0;
}