#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    string s;
    cin>>s;
    string ss;
    ll sum = 0;
    for(ll i=0;i<s.size(); i++){
        if(s[i]!='+'){
            ss+=s[i];
        }
        else{
            int x = stoi(ss);
            cout<<x<<endl;
            
        }
    }
    cout<<sum<<endl;
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