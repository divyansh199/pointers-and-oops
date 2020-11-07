#include<bits/stdc++.h>
using namespace std;

int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		int n,m;
		int k,l;
		cin>>n;
		vector<pair<int,int>>v;
			
			for(int i=0;i<n;i++)
				{
					cin>>k>>l;
					v.push_back(make_pair(k,l));
				}
		if(n>=6)
		{
			m=n/2;
			n=n+m;
			cout<<n;
		}
		else{
			cout<<"-1";
		}
		
	
}

	
	
