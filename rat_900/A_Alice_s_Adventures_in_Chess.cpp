#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    ll i=0, x=0,y=0;
    bool chk = false;
    while(true && i<10000){
        char ch = s[i % n];
        if(ch=='N'){
            y++;
        }
        else if(ch=='S'){
            y--;
        }
        else if(ch=='E'){
            x++;
        }
        else x--;
        if(x==a && y==b){
            chk = true;
            break;
        }
        i++;
    }
    if(chk){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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