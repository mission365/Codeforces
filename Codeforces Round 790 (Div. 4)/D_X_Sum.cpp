#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const ll N = 200;
const ll M = 200;

ll a[N][M];

ll check(ll i, ll j, ll n, ll m){
    ll sum = 0;
    ll index = 0;
    while(i-index>-1 and j-index>-1){
        sum+=a[i-index][j-index];
        index++;
    }
    index = 0;
    while(i-index>-1 and j+index<m){
        sum+=a[i-index][j+index];
        index++;
    }
    index = 0;
    while(i+index<n and j-index>-1){
        sum+=a[i+index][j-index];
        index++;
    }
    index = 0;
    while(i+index<n and j+index<m){
        sum+=a[i+index][j+index];
        index++;
    }
    return sum-3*a[i][j];
}

void solve(){
    ll n,m;
    cin>>n>>m;
    
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll ans = 0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ans = max(ans, check(i,j,n,m));
        }
    }
    cout<<ans<<endl;
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