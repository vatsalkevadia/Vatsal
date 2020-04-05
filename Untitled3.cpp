#include <bits/stdc++.h> 
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
        int n;
        cin >> n;
        vector<pair<int,int> > p;
        int a[n][2];
        char o[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
            p.push_back(make_pair(a[i][0],i));
        }
        sort(p.begin(),p.end());
        int c=0,j=0;
        bool br=false;
        for(int i=0;i<n;i++)
        {
            if(p[i].first>=c)
            {
                o[p[i].second]='C';
                c=a[p[i].second][1];
            }
            else
            {
                if(p[i].first>=j)
                {
                    o[p[i].second]='J';
                    j=a[p[i].second][1];
                }
                else
                {
                    br=true;
                    break;
                }
            }
        }
        cout<<"Case #"<<l<<": "; 
        if(br)
            cout<<"IMPOSSIBLE";
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<o[i];
            }
        }
        cout<<endl;
    }
}
