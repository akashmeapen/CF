#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> pre(n);
        pre[0] = a[0];
        for(int i=1;i<n;i++){
            pre[i] = max(pre[i-1], a[i]);
        }
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            cout<<sum+pre[i]<<" ";
            sum+=a[i];
        }
        cout<<"\n";
    }
}