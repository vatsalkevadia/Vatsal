#include<bits/stdc++.h>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int l=1;l<=t;l++)
	{
		int n,k=0,r=0,c=0;
		cin>>n;
		int m[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>m[i][j];
				if(i==j)
					k+=m[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			bool row[n+1]={false};
			for(int j=0;j<n;j++)
			{
				if(row[m[i][j]])
				{
					r++;
					break;
				}
				else
					row[m[i][j]]=true;
			}
		}
		for(int i=0;i<n;i++)
		{
			bool col[n+1]={false};
			for(int j=0;j<n;j++)
			{
				if(col[m[j][i]])
				{
					c++;
					break;
				}
				else
					col[m[j][i]]=true;
			}
		}
		cout<<"Case #"<<l<<": "<<k<<" "<<r<<" "<<c<<endl;
	}
}
