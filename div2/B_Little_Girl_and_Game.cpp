#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

bool isPalindrome(string s1) {
    ll len = s1.size();
    for(ll i=0; i<len/2; i++) {
        if(s1[i] != s1[len-i-1]) return false;
    }
    return true;
}

void solve(){
    string s;
    cin>>s;
    ll sz = s.size();
    unordered_map<char,ll> mp;
    for(ll i=0;i<sz;i++)mp[s[i]]++;
    ll cnteven = 0, cntodd = 0;
    for(auto it: mp){
        if(((it.second)%2)==1)cntodd++;
        else cnteven++;
    }
    if(cntodd>0 && sz%2==0) cout<<"Second"<<endl;
    else if(cntodd==0 && sz%2 == 0)cout<<"First"<<endl;
    else cout<<"First"<<endl;
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