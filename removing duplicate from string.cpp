//removing duplicates from string
#include<bits/stdc++.h>
using namespace std;

int length(char s[])
{
	if(s[0]=='\0')
	{
		return 0;
	}
	int smallstringlength=length(s+1);
	return 1+smallstringlength;
	
}


void duplicate(char s[])
	{
	
		int l=length(s);
		if(l<1)
		{
			return ;
		}
		
		
			if(s[0]!=s[1])
				{
					duplicate(s+1);
				}
				
				else{
					int i=1;
					for(;s[i]!='\0';i++)
					{
						s[i-1]=s[i];
					}
					s[i-1]=s[i];
					duplicate(s);
					
									 				
			}
}
	


int main()
{		
		char s[100];
		cin>>s;
		duplicate(s);
		cout<<s;
					
}
