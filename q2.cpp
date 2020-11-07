#include<bits/stdc++.h>
using namespace std;



bool compare(pair<int,int>a, pair<int,int>b)
{
    
    return (a.second <b.second);
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
				int n;
				cin>>n;
				int a[n];
				map<int,int>mp;
				for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
				int t=1;
				
				int max[n];
				int maxi=0;
				int  mini=0;
		
		while(t<=2)
				{
				for(int i=0;i<n;i++)
				{
					max[i]=i+a[i]*t;
					mp[max[i]]=mp[max[i]]+ 1;
				}
				
					for(auto it=mp.begin();it!=mp.end();it++)
					{
						maxi=0;
						if(it->second >maxi)
						{
							maxi=it->second;
						}
					}
					
					if(maxi=n)
					    {
					        mini=maxi;
					        cout<<maxi<< " "<<mini;
					        break;
					    }
					    
					    else{
					        cout<<maxi<<" ";
					    }
					
			}
			}
				
}
				
		
			

