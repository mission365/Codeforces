#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n, a, b;
    cin>>n>>a>>b;
    if(a>=b) cout<<n*a<<endl;
    else{
        ll ans =0;
        ll diff = b-a;
        if(diff<=n){
            ans = (b*diff)-((diff*(diff-1))/2);
            n-=diff;
            ans += (n*a);
        }
        else{
            diff = n;
            ans = (b*diff)-((diff*(diff-1))/2);
        }
        cout<<ans<<endl;
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