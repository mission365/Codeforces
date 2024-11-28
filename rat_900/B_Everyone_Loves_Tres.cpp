#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    if(n==1 || n==3) cout<<-1<<endl;
    else if(n==2) cout<<66<<endl;
    else if(n%2 == 0) {
        string ss = "3366";
        string anss;
        ll x=n-4;
        for(int i=0;i<x;i++){
            anss+="3";
        }
        anss+=ss;
        cout<<anss<<endl;
    }
    else{
        string s = "6366";
        string ans;
        ll x = n-4;
        for(int i=0;i<x;i++){
            ans+="3";
        }
        ans+=s;
        cout<<ans<<endl;
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