#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    cout<<min(x,y)<<" "<<0<<" "<<0<<" "<<min(x,y)<<endl;
    cout<<0<<" "<<0<<" "<<min(x,y)<<" "<<min(x,y)<<endl;
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