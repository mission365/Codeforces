#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    for(ll i=0; i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll cnt = 0;
    for(auto it: mp){
        cnt+= it.second/2;
    }
    cout<<cnt<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
    //solve();
    return 0;
}