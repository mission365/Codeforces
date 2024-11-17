#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll k,q;
    cin>>k>>q;
    ll a[k];
    for(ll i=0;i<k;i++){
        cin>>a[i];
    }
    sort(a,a+k);
    ll b[q];
    for(ll i=0; i<q;i++){
        cin>>b[i];
    }
    for(ll i=0; i<q;i++){
        if(b[i]<a[0]) cout<<b[i]<<" ";
        else cout<<a[0]-1<<" ";
    }cout<<endl;

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