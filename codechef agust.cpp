#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
	return a.second<b.second;
}

bool compare2(pair<int,int>e,pair<int,int>f)
{
    if(e.second==f.second)
    {
        return e.first>f.second;
    }
    
    else{
        return e.second<f.second;
    }
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
				
			for(auto it2=m.begin();it2!=m.end();it2++)
			{
			
				
					v.push_back(make_pair(it2->first,it2->second));
					
			
				
			}
			sort(v.begin(), v.end(), compare); 
			
			
	int count=1;
	int j=0;
	vector<pair<int,int>>l;
	for (int i = 0; i < v.size(); i++)
	    {
	        if(v[i].second==v[i+1].second)
	        {   
	            j=v[i].second;
	            count++;
	        }
	        else{
	            l.push_back(make_pair(j,count));
	            count=1;
	            
	        }
	    }
	    
	    
	     auto h= *max_element(l.begin(),l.end(),compare2);
	   printf("%d \n",h);
	  
	   
	}
		
	
	
	}
