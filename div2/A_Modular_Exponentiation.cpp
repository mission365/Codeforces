#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

ll binpow(ll base, ll power)
{
    ll result = 1;
    while (power)
    {
        if (power % 2 == 1)
        {
            result = (result * base);
            power--;
        }
        else{
            base = (base*base);
            power /= 2;
        }
    }
    return result;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    if(n <= 31){
        cout<<m% binpow(2,n)<<endl;
    }
    else{
        cout<<m<<endl;
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