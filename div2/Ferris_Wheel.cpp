#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater <ll>());
    ll sum =0;
    ll first = 0, second = n-1;
    for(ll i=first;i<=second;i++){
        if(a[i]+a[second] <=k){
            sum++;
            second--;
        }
        else sum++;
    }
    cout<<sum<<endl;
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