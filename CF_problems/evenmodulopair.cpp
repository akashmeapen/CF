#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> odds;
        for (auto num : a) {
            if (num % 2 == 1 && num != 1) { // only consider odd numbers except 1
                odds.push_back(num);
            }
        }

        if (odds.size() >= 2)
            cout << odds[0] << " " << odds[1] << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}
