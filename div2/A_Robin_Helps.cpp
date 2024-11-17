#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll sum = 0;
    ll cnt = 0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        if(a[i]>=k) sum+=a[i];
        if(a[i]==0 && sum>0){
            cnt++;
            sum--;
        }
    }
    cout<<cnt<<endl;
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