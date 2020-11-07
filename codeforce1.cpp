#include<bits/stdc++.h>
using namespace std;


void abso(int n,int k)

{	int r=0;
	int x;
	if(k<=n)
{
		
	while(x!=k)
		{
			 x=abs((r-0)-(n-r));
			r++;
		}
		cout<<r;
	}
	
	else{
		
			while(x!=k)
		{
			 x=abs((r-0)-(n-r));
			n++;
		}
		cout<<r;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long t;
	cin>>t;
	while(t--)
		{
			int n;
			long k;
			cin>>n;
			cin>>k;
		abso(n,k);
			
		}
}
