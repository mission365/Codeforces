#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<n/2 - (n%2 == 0 ? 1 : 0)<<endl;
    ll i =0, j = n-1;
    while(i<j){
        cout<<a[j--]<<" "<<a[i++]<<" ";
    }
    if(n%2==1)cout<<a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ll t;
    // cin>>t;
    // while(t--) {
    //     solve();
    // }
    solve();
    return 0;
}