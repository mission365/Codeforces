#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll cnt = 0;
    while(n>0){
        if(n%4==0){
            cnt++;
            n-=4;
        }
        else{
            cnt++;
            n-=2;
        }
    }
    cout<<cnt<<endl;
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