#include<bits/stdc++.h>
using namespace std;

/*
void solve()
{
	map<char,bool> m;
	int n;
	string s;
	cin>>n>>s;
	bool flag = true;
	m[s[0]] = true;
	
	for(int i=1;i<n;++i)
	{
		if(s[i]==s[i-1]) continue;
		if(m[s[i]]) flag=false;
		m[s[i]]=true;
	}
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}*/

void solve()
{
	int n; 
	string s;
	cin>>n;
	cin>>s;
	int flag = 1;
	for(int i=0;i<n;++i)
	{
		if(s[i]!=s[i+1])
		{
			for(int j=i+1;j<n;++j)
			{
				if(s[i]==s[j])
				{
					flag=0;
					break;
				}
			}
		}
	}

	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
