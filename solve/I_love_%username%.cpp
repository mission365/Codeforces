#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            count++;
        }
        if(a[i]<min)
        {
            min=a[i];
            count++;
        }
    }
    cout<<count<<endl;
}
