#include <bits/stdc++.h>
using namespace std;

bool possible(int r,int k) {
    int big = max(r,k), small = min(r,k);
    return big <= 2 * small + 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int r1 = c - a; 
        int k1 = d - b; 

        if (c < a || d < b) {
            cout << "NO\n"; 
            continue;
        }

        if (possible(a, b) && possible(r1, k1)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
