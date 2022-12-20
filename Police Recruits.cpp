#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0)
        {
            count+=x;
        }
        else
        {
            if(count<1)sum++;
            else count--;
        }
    }
    cout<<sum;
}
