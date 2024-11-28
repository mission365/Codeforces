#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    if(n<5) cout<<-1<<endl;
    else{
        if(n==5){
            cout<<"2 4 5 3 1"<<endl;
        }
        else{
            vector<ll> ans;
            vector<ll> ans2 = {2,4,5,3,1};
            for(ll i=n;i>5;i--){
                if(i%2==0){
                    ans.push_back(i);
                }
            }
            ans.insert(ans.end(), ans2.begin(), ans2.end());
            for(ll i=n;i>5;i--){
                if(i%2==1){
                    ans.push_back(i);
                }
            }
            for(auto it: ans){
                cout<<it<<" ";
            }
            cout<<endl;

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