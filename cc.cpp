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
			
		int i,n,k;
		cin>>n>>k;
		vector<int>a;
		int m;
	for(i=0;i<n;i++)
	{
		cin>>m;
		a.push_back(m);
		
	}
		int flag=0;
		i=0;
		int j=0;
		int count=0;
		
		
		while(i<n)
		
		{
			j += a[i];
				
			if(a[0]>k)
		
		{
			cout<<"-1"<<endl;
			flag=flag+1;
			break;
		}
		
	
			if(j<k)
			{
			/*	if(i==n-1)
				{
				cout<<"1"<<endl;
				flag=flag+1;
				break;
				}
				*/
			
				
				i++;
	
		}
			
			else{
				count++;
				j=0;
	}
	

}

if(j<k )
{
	count++;
}
if(flag==0)
{
cout<<count<<endl;
}
		
		}
		
		
		
		
		
	
	}
	

	
	
