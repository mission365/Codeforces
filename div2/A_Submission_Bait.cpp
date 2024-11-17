#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    unordered_map<ll,ll> mp;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it: mp){
        if(it.second % 2 == 1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    
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