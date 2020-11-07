#include<bits/stdc++.h>
using namespace std;

bool compare(string A,string B)
{
	return A<B;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
		{
			
			string s,p;
			cin>>s;	
			cin>>p;
			vector<string>s1;
		do
			{
					if(s.find(p)!=string::npos)
				
				{
					
			s1.push_back(s);
			}
			}while(next_permutation(s.begin(),s.end()));
			
	
		sort(s1.begin(),s1.end(),compare);
			
			//cout<<s1[1];
			
			for(int i;i<s1.size();i++)
				{
					cout<<s1[i]<<endl;
				}

}
}
