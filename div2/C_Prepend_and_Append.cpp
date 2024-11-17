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
    ll i=0,j=n-1;
    while(i<j){
        if((s[i]=='1' && s[j]=='0') || (s[i]=='0' && s[j]=='1')){
            i++;
            j--;
        }
        else{
            break;
        }
    }
    cout<<j-i+1<<endl;
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