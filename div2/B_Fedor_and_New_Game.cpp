#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

ll countOne(ll n){
    ll x=0;
    while(n!=0){
        n &= (n-1);
        x++;
    }
    return x;
}

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(m+1);
    for(ll i=0;i<=m;i++){
        cin>>v[i];
    }
    ll cnt = 0;
    ll res = 0;
    for(ll i=0;i<m;i++){
        res = v[i] ^ v[m];
        if(countOne(res) <= k){
            cnt++;
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