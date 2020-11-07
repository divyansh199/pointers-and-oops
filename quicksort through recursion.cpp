#include<bits/stdc++.h>
using namespace std;

void qs(a[],si,ei)
	{
		int n=sizeof(a)/sizeof(int);
		if(n<=1)
		{
			return ;
		}
		
		int c=partition(a,si,ei);
		qs(a,si,c-1);
		qs(a,c+1,ci);
	}
	
	void partition(a[],si,ei)
		{
			int k=0;
			int m=0;
			for(int i=1;i<ei;i++)
				{
					if(a[i]<=a[k])
						{
							m=count++;
						}
						
						
				}
				swap(a[si],a[si+m]);
						
						int i= si;
						int j=ei;
						
						while(a[i]!=a[m] || j!=a[m])
							{
								if(a[i]<a[m])
								{
									i++;
								}
								
								else if(a[j]>a[m])
									{
										j--
									}
									
									else{
										swap(a[i],a[j]);
									}
								
								return si+m;
							}
		}











int main()
	{
		int si=0;
		int n;
		cin>>n;
		int a[n];
		int ei=n-1;
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		 qs(a,si,ei);
		 
		 for(int i=0;i<n;i++)
		 {
		 	cout<<a[i];
		 }#include<bits/stdc++.h>
using namespace std;

   int  partition(int a[],int si,int ei)
		{
			int k=0;
			int m=0;
			for(int i=1;i<ei;i++)
				{
					if(a[i]<=a[k])
						{
							m=m+1;
						}
						
						
				}
				swap(a[si],a[si+m]);
						
						int i= si;
						int j=ei;
						
						while(a[i]!=a[m] && j!=a[m])
							{
								if(a[i]<a[m])
								{
									i++;
								}
								
								else 
								    if(a[j]>a[m])
									{
										j--;
									}
									
									else{
										swap(a[i],a[j]);
									}
								
							
							}
							
								return m;
		}


void qs(int a[],int si,int ei,int n)
	{
	    
		if(n<=1)
		{
			return ;
		}
		
		int c=partition(a,si,ei);
		qs(a,si,c-1,n);
		qs(a,c+1,ei,n);
	}
	










int main()
	{
		int si=0;
		int n;
		cin>>n;
		int a[n];
		int ei=n-1;
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		 qs(a,si,ei,n);
		 
		 for(int i=0;i<n;i++)
		 {
		 	cout<<a[i];
		 }
	}
