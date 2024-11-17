#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll k;
    cin>>k;
    ll l = 1;
    ll h = 2e18;
    ll res = 0;
    while(l<=h){
        ll mid = (l+h)/2;
        ll ans = sqrt(mid);
        while((ans+1)*(ans+1) <= mid) ans++;
        while(ans*ans > mid) ans--;
        ll cnt = mid-ans;
        if(cnt>=k){
            res = mid;
            h = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    cout<<res<<endl;
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