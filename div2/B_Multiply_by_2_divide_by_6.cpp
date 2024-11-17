#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    ll cnt2 = 0, cnt3 = 0;
    while(n%2==0){
        n /= 2;
        cnt2++;
    }
    while(n % 3 == 0){
        n /= 3;
        cnt3++;
    }
    if(n==1 && cnt3>=cnt2){
        cout<<2*cnt3-cnt2<<endl;
    }
    else cout<<-1<<endl;
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