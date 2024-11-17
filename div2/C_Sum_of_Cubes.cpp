#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(unordered_map<ll, ll> mp)
{
    ll x;
    cin>>x;
    ll flag = 0;
    for(ll i=1;i<=10000;i++){
        if(flag) break;
        ll z = i*i*i;
        if(z>=x) break;
        if(mp.find(x-z) != mp.end()){
            flag = 1;
        }
    }
    if(!flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<ll, ll> mp;
    mp[0]=0;
    for (ll i = 1; i < 10001; i++)
    {
        mp[i*i*i]++;
    }

    ll t;
    cin >> t;
    while (t--)
    {
        solve(mp);
    }
    // solve();
    return 0;
}