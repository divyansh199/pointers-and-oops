#include<bits/stdc++.h>
using namespace std;

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
		vector<int>v;
		int l;
			int sum=0;
			for(int i=0;i<n;i++)
			{
				cin>>l;
				v.push_back(l);	
						}
			
			for(i=0;i<n;i++)
			{
				if(i%2==0)
				{
					sum=sum+a[i];
				}
				else{
					sum=sum-a[i];
				}
			}
			
			if(sum==0)
			{
				cout<<l.size()<<endl;
				
				for(i=0;i<l.size();i++)
				{
					cout<<a[i];
				}
			}
			else{
				
			}
			
		}
	}
