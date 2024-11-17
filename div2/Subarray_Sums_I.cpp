#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,x;
    cin>>n>>x;
    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll s = 1;
    ll sum = 0, cnt = 0; 
    for(ll i=1;i<=n;i++){
        if(sum<x){
            sum+=a[i];
        }
        if(sum==x){
            cnt++;
            sum-=a[s];
            s+=1;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ll t;
    // cin>>t;
    // while(t--) {
    //     solve();
    // }
    solve();
    return 0;
}