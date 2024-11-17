#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll l,r;
    cin>>l>>r;
    ll cnt = 0;
    ll dif = r-l;
    ll lo = 1, rt = 1e9;
    if(l==r){
        cout<<1<<endl;
        return;
    }
    while(lo<rt){
        ll mid = lo+(rt-lo+1)/2;
        if(mid * (mid+1)/2 <= dif){
            lo = mid;
        }
        else rt = mid-1;
    }
    cout<<lo+1<<endl;
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