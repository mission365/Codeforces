#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

vector<ll> prefixSum(ll n, ll a[]){
    vector<ll> v(n+1);
    v[1]=a[1];
    for(ll i=2;i<=n;i++){
        v[i] = v[i-1]+a[i];
    }
    return v;
}

void solve(){
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }

    vector<ll> pSum = prefixSum(n,a);

    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<pSum[r]-pSum[l]<<endl;
    }


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