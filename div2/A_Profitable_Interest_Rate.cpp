#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<a<<endl;
    }
    else{
        if(2*a > b)cout<<2*a-b<<endl;
        else cout<<0<<endl;
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