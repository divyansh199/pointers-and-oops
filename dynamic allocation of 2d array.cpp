//dynamic allocation of twoor multidimentionala array

#include<iostream>
using namespace std;

int main()
	{
		int m,n;
		cin>>m>>n;
		int**p=new int*[n]; //it creat array of [int*[],int*[]..........]
		
		for(int i=0;i<n;i++)
		{
			p[i]=new int[n];
			 for(int j=0;j<n;j++)
			 	{
			 		cin>>p[i][j];
				 }
		}
		
		for(int i=0;i<m;i++)
	{
			
		delete[] p[i];
		}
	delete[]p;
}
