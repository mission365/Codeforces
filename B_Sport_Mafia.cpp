#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// const ll N = 1e8;
// ll pre[N];

// bool valid(ll mid){
//     ll dif = n-mid;
//     if(pre[mid]-mid==k) return 1;
//     else return 0;
// }

void solve(){
    ll n,k;
    cin>>n>>k;
    ll l=-1, h=n+1;
    // pre[0]=1;
    // for(ll i=1;i<n;i++){
    //     pre[i]= i+pre[i-1];
    // }
    while(h-l > 1){
        ll mid = (l+h)/2;
        if((n-mid)*(n-mid+1)/2 -mid > k){
            l = mid;
        }
        else h = mid;
    }
    cout<<h;
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