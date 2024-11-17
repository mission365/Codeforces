#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
string s;
char ch;
void solve(){
    
    cin>>s;
    
    for(ll i=0; i<s.size(); i++){
        if(ch<s[i]) ch=s[i];
    }
    for(ll i=0; i<s.size(); i++){
        if(ch==s[i]){
            cout<<ch;
        }
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