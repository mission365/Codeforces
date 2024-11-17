#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    string a,b;
    cin>>a>>b;
    ll ap=0,bp=0,u=0;
    for(ll i=0;i<a.size();i++){
        if(a[i]=='+')ap++;
        if(b[i]=='+')bp++;
        if(b[i]=='?')u++;
    }
    ll res = 0;
    for(ll i=0;i<(1<<u);i++){
        if(__builtin_popcount(i)+bp == ap){
            res++;
        }
    }
    cout<<fixed<<setprecision(9)<<(double)res/(1<<u)<<endl;
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