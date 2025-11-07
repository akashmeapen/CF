#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int root=sqrt(a);
        if(root*root==a){
            cout<<0<<" "<<root<<endl;

        }else{
            cout<<-1<<endl;

        }
    }
}