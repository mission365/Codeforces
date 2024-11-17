#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    ll k=0;
    for(ll i=1;i<=n;i++){
        if(i%2==1){
            k&=i;
        }
        else{
            k|=i;
        }
    }
    cout<<k+1<<endl;

    for(ll i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
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