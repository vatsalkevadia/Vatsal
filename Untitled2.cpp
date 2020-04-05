#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int l=1;l<=t;l++)
	{
		string s;
		cin>>s;
		cout<<"Case #"<<l<<": ";
		for(int i=0;i<s.length();i++)
		{
			if(i==0)
			{
				for(int j=0;j<s[0]-48;j++)
				{
					cout<<"(";
				}
			}
			else
			{
				if(s[i]>s[i-1])
				{
					for(int j=0;j<s[i]-s[i-1];j++)
						cout<<"(";
				}
				else
				{
					for(int j=0;j<s[i-1]-s[i];j++)
						cout<<")";
				}
			}
			cout<<s[i];
			if(i==s.length()-1)
			{
				for(int j=0;j<s[i]-48;j++)
				{
					cout<<")";
				}
				cout<<endl;
			}
		}
	}
}
