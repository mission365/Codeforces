#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());
    ll firstval = v[0];
    ll secondval = v[n-1];
    ll firstcount = 1;
    // cout<<firstcount<<endl;
    ll secondcount = 1;
    // cout<<secondcount<<endl;
    for(ll i=0;i<n;i++){
        if(v[i]!=v[i+1])break;
        firstcount++;
    }
    if(firstcount == n){
        cout<<0<<" "<<(n*(n-1))/2;
        return;
    }
    for(ll i=n-1;i>=0;i--){
        if(v[i]!=v[i-1])break;
        secondcount++;
    }
    cout<<v[n-1]-v[0]<<" "<<firstcount*secondcount<<endl;
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