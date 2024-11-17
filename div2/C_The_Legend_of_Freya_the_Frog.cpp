#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll a = ceil(x,k);
    ll b = ceil(y,k);
    if(b>=a){
        cout<<b*2<<endl;
    }
    else{
        cout<<(2*a)-1<<endl;
    }
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