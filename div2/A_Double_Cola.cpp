#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll i =1;
    string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    while(n > (5*i)){
        n -= (5*i);
        i *= 2;
    }

    cout<<s[(n-1)/i] << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    solve();
    return 0;
}