#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

bool check(ll x, vector<ll> v, ll k){
    ll moves = 0;
    ll n = v.size();
    for(ll i=n/2;i<n;i++){
        if(x-v[i]>0) moves+=(x-v[i]);
        if(moves>k) return false;
    }
    if(moves<=k) return true;
    else return false;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i = 0; i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll l = 0;
    ll h = 2e9;
    while(l<h){
        ll mid = (l+h+1)/2;
        if(check(mid, v, k)){
            l = mid;
        }
        else h = mid-1;
    }
    cout<<l<<endl;
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