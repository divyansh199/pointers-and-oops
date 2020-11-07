//first index of number
#include<iostream>
using namespace std;

int index(int *a,int n,int x,vector<int>k)

{
    
	if(n==0)
	{
		return 0;
	}


	
		
		int ind=index(a,n-1,x);
		
		if(ind==0)
{
		
		
	for(int i=0;i<n;i++)
		{
			if(*(a+i)==x)
			{
				k.push_back(i);
			}
			
			
		}
		if(a[n-1]==x)
		{
			return k.size()+1;
		}
				   
				   
				    
				   
						
						
						 
				
	}
}


int main()
	{
		int i,n,x,;
		
		cin>>n;
        int a[n];
        vector<int>k;
        		
		for(i=0;i<n;i++)
		
		{
			cin>>a[i];
			
		}
		
		
			cin>>x;
			cout<<index (a,n,x,k);
			
		
	}

