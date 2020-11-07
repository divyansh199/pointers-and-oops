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

		int k;
		cin>>k;
		vector<int>a;
		vector<int>n;
		int j;
		for(int i=0;i<k;i++)
		{
			cin>>j;
			a.push_back(j);
			
		}
		int l=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==0)
			{
				l++;
			}
			else{
				n.push_back(l);
				l=0;
			}
		}
		
		int maxi=0;
		
		maxi=*max_element(n.begin(),n.end());
		
		if(maxi%2!=0 || maxi==1)
		{
			cout<<"YES"<<endl;
		}
		
		else{
			cout<<"NO"<<endl;
		}
		
	
	}
}
