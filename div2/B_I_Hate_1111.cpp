#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;cin>>n;
    for(int i=0;i<20;i++){
        if(n%11==0){
            cout<<"YES"<<endl;
            return;
        }
        n-=111;
        if(n<0) break;
    }
    cout<<"NO"<<endl;
    
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