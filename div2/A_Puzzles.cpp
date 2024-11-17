#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[m];
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    ll res  = INT_MAX;
    for(ll i=0;i<m-n+1;i++){
        ll x = abs(a[i]-a[n-1+i]);

        // cout<<x<<endl;
        res = min(res, x);
        
    }
    cout<<res<<endl;
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