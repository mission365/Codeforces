#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll l = 1;
    ll h = n;
    ll ans = 0;

    while(l<=h){
        ll mid = l+(h-l)/2;
        ll res = (mid*(mid+1))/2;
        if(res<=n){
            ans = mid;
            l = mid+1;
        }
        else h = mid-1;
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