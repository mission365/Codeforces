#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    string s;
    cin>>s;
    if(s[0]!='-') cout<<s<<endl;
    else{
        ll x = stoi(s);
        if(x%10 == 0 && x>(-100)) cout<<0<<endl;
        else {
            ll n = s.size();
            ll p = (s[n-1]);
            ll q = s[n-2];
            if(p>q){
                s.pop_back();
                cout<<s<<endl;
            }
            else{
                s.pop_back();
                s.pop_back();
                s+=p;
                cout<<s<<endl;
            }

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