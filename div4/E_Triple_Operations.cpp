#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

vector<ll> preCompute;

void solve(){
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    ll val =l;
    while(val != 0){
        val /= 3;
        ans++;
    }
    ans *= 2;
    ans+= (preCompute[r]-preCompute[l]);
    cout<<ans<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    preCompute.resize(200001,0);
    for(ll i=1;i<=200001;i++){
        ll cnt=0;
        ll val=i;
        while(val != 0){
            val /= 3;
            cnt++;
        }
        preCompute[i]=cnt;
    }
    for(ll i=1;i<=200001;i++){
        preCompute[i]+=preCompute[i-1];
    }
    
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
    //solve();
    return 0;
}