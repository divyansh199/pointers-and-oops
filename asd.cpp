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
		
		int i;
		int n;
		cin>>n;
		int k;
		vector<pair<int,int>>v;
		int c1=0;
	for(i=0;i<n;i++)
		{
			cin>>k;
			v.push_back(k);
			}
	
for( i=;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	
	{
		v.push_back(make_pair(i,j));
	}
}

for(auto it:v)
	{
		cout<<it;
	}

}
