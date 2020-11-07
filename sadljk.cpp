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
 long long int n1, n2, max;

    
    cin >> n1 >> n2;
    
max=1;
int j=min(n1,n2);
for(int i=1;i<=j;i++)
{
	if(n1%i==0&& n2%i==0)
	{
		max=i;
	}
}
int k= (n1>n2)?n1:n2;
max=max*k;
cout<<max;
}
}
