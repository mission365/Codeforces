#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

ll call(string x , string y){
    ll res = 0;
    ll sz = x.size();
    for(ll i=0;i<sz;i++){
        res+=abs(x[i]-y[i]);
    }
    return res;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> vs;
    while (n--)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }
    ll chk = INT_MAX;
    for(ll i=0;i<vs.size();i++){
        for(ll j=i+1;j<vs.size();j++){
            chk = min(chk, call(vs[i],vs[j]));
        }
    }
    cout<<chk<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}