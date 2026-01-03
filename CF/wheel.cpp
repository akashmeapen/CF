#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int l, a, b;
        cin >> l >> a >> b;

        vector<bool> visited(l, false);

        int current = a;
        int maxPrize = a;

        while (!visited[current])
        {
            visited[current] = true;
            maxPrize = max(maxPrize, current);
            current = (current + b) % l;
        }

        cout << maxPrize << endl;
    }
    return 0;
}
