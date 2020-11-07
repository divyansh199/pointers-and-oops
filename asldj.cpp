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
		int p[n];
		int max=1;
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
			max=max*p[i];
		}
		int r;
		cin>>r;
		int k=*min_element(p,p+n);
		
	if(r<k)
{	
	max=max+r;
}
	cout<<max<<endl;
		
	}
}
