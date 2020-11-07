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
			int n,m;
			cin>>n>>m;
			int a[n],b[m];
			int c[n][m];
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			for(int i=0;i<m;i++)
			{
				cin>>b[i];
			}
			int k=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					a[i]= a[i]+b[j];
					c[i][k]=a[i];
					k++;
				}
			}
			
			
			for(int i=0;i<n;i++)
			{
				for(int k=0;k<m;k++)
				{
				
				cout<<c[i][k]<<endl;
				
			}
			}
		}
	}
