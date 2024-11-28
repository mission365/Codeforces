#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll k;
    cin>>k;
    ll a[k];
    map<ll,ll> mp;
    for(ll i=0;i<k;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+k);
    ll ans=k-2;
    for(int i=0;i<k;i++)
    {
        if(ans%a[i]==0)
        {
            if(mp[ans/a[i]])
            {
                cout<<a[i]<<" "<<ans/a[i]<<endl;
                return;
            }
        }
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