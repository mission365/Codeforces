#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    ll sum = 0;
    for(ll i=1; i<=n; i++){
        if(i%2==0){
            sum+= (-1)*(a[i]);
        }
        else sum+=a[i];
    }
    cout<<sum<<endl;
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