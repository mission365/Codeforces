#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b


void solve(){
    ll n;
    cin>>n;
    vector<int> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt = 0;
    ll mn = INT_MAX;
    for(ll i=0;i<n;i++){
        cnt = 0;
        for(ll j=i+1;j<n;j++){
            if(a[i]<a[j])cnt++;
        }
        cnt+=i;
        // cout<<cnt<<endl;
        mn = min(mn,cnt);
    }
    cout<<mn<<endl;
    
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