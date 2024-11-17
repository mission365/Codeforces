#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    ll m = 2*n;
    ll a[m+1];
    ll cnt = 0;
    for(ll i=1;i<=m;i++){
        cin>>a[i];
        if(a[i]==1)cnt++;
    }
    ll mn = 0, mx = 0;
    for(ll i=1;i<=m;i+=2){
        if(a[i]==0 && a[i+1]==0) continue;
        else if(a[i]==0 && a[i+1]==1) mn++;
        else if(a[i]==1 && a[i+1]==0) mn++;
        else continue;
    }
    if(cnt>=n) mx = n;
    else mx = cnt;
    cout<<mn<<" "<<mx<<endl;
    
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