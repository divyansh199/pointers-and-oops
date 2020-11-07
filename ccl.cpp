#include<bits/stdc++.h>
using namespace std;





long int n;

int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		int t;
		cin>>t;
		
		
		while(t--)
		{
		   cin>>n;
		   long long int  a[n];
	      set< int>s;
			
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			
			for(int i=0;i<n;i++)
			{
				s.insert(a[i]);
			}
			
		
		cout<<s.size()<<endl;
		}
	}
