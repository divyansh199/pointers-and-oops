#include<bits/stdc++.h>
using namespace std;


void abso(int n,int k)

{	int r=0;
	int count=0;
	int x;
	


	if(k<n)
{
		
	while(x!=k)
		{
			 x=abs((r-0)-(n-r));
			 
			
			r++;
		}
		cout<<r+1;
	}
	
	else{
		
			while(x!=k)
		{
			 x=abs((r-0)-(n-r));
			n++;
			count++;
		}
		cout<<count-1;
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
