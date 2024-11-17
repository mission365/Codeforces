#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long


void solve(){
    ll n,d;
    cin>>n>>d;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<ll>());
    ll i=0;
    ll cnt = 0;
    ll pl = 0;
    while(i<n && pl<=n){
        ll find = ceil((double)(d+1)/a[i]);
        pl+=find;
        if(pl<=n)cnt++;
        i++;
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
