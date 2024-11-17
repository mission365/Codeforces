#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1);
    dp[0] = 0;
    for (int i = 1;i<=n;i++){
        dp[i] = -1;
        if (i>=a)dp[i] = max(dp[i],dp[i-a]);
        if (i>=b)dp[i] = max(dp[i],dp[i-b]);
        if (i>=c)dp[i] = max(dp[i],dp[i-c]);
        if (dp[i]!=-1)dp[i]++;
    }
    cout<<dp[n]<<endl;
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