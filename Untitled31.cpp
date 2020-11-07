#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
	return a.first>b.first;
}

int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		int t;
		cin>>t;
		
		while(t--)
		{
			int n,m;
			cin>>n>>m;
			int a[n],b[m];
			vector<int>c;
			vector<pair<int,int> >p;
			int maxi=0;
			int low=0;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			
			for(int i=0;i<n;i++)
		{
				
			for(int j=0;j<m;j++)
			{
				cin>>b[j];
				
			}
			
			for(int j=0;j<m;j++)
			{
				a[i]= a[i]+b[j];
				c.push_back(a[i]);
				
			}
			
			maxi= *max_element(c.begin(),c.end());
			low= (lower_bound(c.begin(),c.end(),maxi)-c.begin());
			
			p.push_back(make_pair(low,maxi));
			
			c.clear();
			
			
		}
		
		int count=1;
		sort(p.begin(),p.end(),compare);
		for(int i=0;i<p.size();i++)
			{
				if(p[i].first==p[i+1].first)
				count++;
			}
			
		cout<<count<<endl;
		}
	}
