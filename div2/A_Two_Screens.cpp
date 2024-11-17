#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a, b) (a + b - 1) / b

void solve()
{
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    ll m = t.size();
    ll count = 0;
    for(ll i=0;i<min(n,m);i++){
        if(s[i]==t[i]){
            count++;
        }
        else{
            break;
        }
    }
    ll ans = count+ n+m-(2*count);
    if(count != 0){
        ans++;
    }
    cout<<ans<<endl;
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