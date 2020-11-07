#include<bits/stdc++.h>
using namespace std;

void take(int a[],int k[],int n)
{
	int low=0;
	int high=n-1;
	int middle;
	
	mergesort(low,high,middle);
}

void mergesort(int low,int high)
{
	if(low<high)
		{
			int middle=(low+high)/2;
			mergesort(low,middle);
			mergesort(middle+1,high);
			merge( low, middle,high);
			
			
		}
}

void merge(int low,int middle,int high)
	{
		
		for(int i=low;i<=high;i++)
		{
			helper[i]=a[i];
			
		}
		i=low;
		j=middle+1;
		k=high;
		
		while(i<=middle && j<=high)
		{
			number[k]=helper[i];
			i++;
		}
		
		else{
			number[k]=helper[j];
			j++
		}
		k++;
	}
while(i<middle)
	{
		numbers[k]=helper[i];
		k++;
		i++;
	}




int main()
{
	
	int n;
	cin>>n;
	int a[n];
	int k[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	
	take(a,k,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
