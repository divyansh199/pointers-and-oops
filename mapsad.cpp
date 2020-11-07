#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
	return a.second<b.second;
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
				int i;
				int n;
				map<int,int>m;
				cin>>n;
				int a[n];
				
				for(i=0;i<n;i++)
				{
					cin>>a[i];
					
				}
				
				
				for(i=0;i<n;i++)
				{
					m[a[i]]=m[a[i]]+1;
				}
				
		vector<pair<int,int>>v;
				
			for(auto it2=m.begin();it!=m.end();it2++)
			{
			
				
					v.push_back(make_pair(it2->first,it2->second));
					
			
				
			}
			sort(v.begin(), v.end(), compare); 
			
			for (int i = 0; i < vec.size(); i++)
	{
		cout << v[i].first << ": " << v[i].second << endl;
	}
	}
	
	}
