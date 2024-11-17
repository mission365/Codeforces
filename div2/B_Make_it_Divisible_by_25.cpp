#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

ll check(string &s , string &t){
    ll n = s.size()-1;
    ll ans = 0;
    while(n>=0 && s[n] != t[1]){
        n--;
        ans++;
    }
    if(n<0) return 1e9;
    n--;
    while(n>=0 && s[n] != t[0]){
        n--;
        ans++;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    ll ans = 1e9;
    vector<string> a = {"00","25","50","75"};
    for(auto &it : a){
        ans = min(ans, check(s,it));
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