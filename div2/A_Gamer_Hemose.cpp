#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n, h;
    cin>>n>>h;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    
    ll lval = a[n-1];
    ll lsval = a[n-2];
    ll sum = lval + lsval;
    if(lval>=h) cout<<1<<endl;
    else if(sum>=h) cout<<2<<endl;
    else{
        if(h%sum==0) cout<<(h/sum)*2<<endl;
        else{
            ll ans = (h/sum)*2;
            if(h%sum>lval) ans+=2;
            else ans++;
            cout<<ans<<endl;
        }
    }
    

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