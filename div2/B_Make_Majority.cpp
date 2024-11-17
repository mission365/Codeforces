#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool flag = false;
    if(s.find("111") != string :: npos) flag = true;
    else if(s.find("11") != string::npos && s.find("11", s.find("11")+1) != string::npos) flag = true;
    else if(s.find("11") != string::npos && (s[0]=='1' || s[n-1]=='1')) flag = true;
    else if(s[0]=='1' && s[n-1]=='1') flag = true;
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
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