#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    ll cnt =0;
    if(n>=m)cout<<n-m<<endl;
    else{
        while(n<m){
            if(m%2==0) m/=2;
            else {
                m++;
            }
            cnt++;
        }
        cout<<cnt+n-m<<endl;
    }
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