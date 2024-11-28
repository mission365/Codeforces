#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    ll a[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    ll ans = 0;
    for(int k=0;k<n;k++){
        ll i=0,j=k,mn=0;
        while(i<n && j<n){
            if(a[i][j] < 0){
                mn = min(mn,a[i][j]);
            }
            i++;j++;
        }
        ans+=abs(mn);
    }
    for(int k=1;k<n;k++){
        ll i=k,j=0,mn=0;
        while(i<n && j<n){
            if(a[i][j] < 0){
                mn = min(mn,a[i][j]);
            }
            i++;j++;
        }
        ans+=abs(mn);
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