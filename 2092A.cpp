#include <bits/stdc++.h>
using namespace std;

// Define GCD function
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int maxa, mina;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        mina=a[0],maxa=a[0];
        for(auto x:a){
             mina=min(x,mina);
             maxa=max(x,maxa);
        }
        cout<<maxa-mina<<endl;
    }
}