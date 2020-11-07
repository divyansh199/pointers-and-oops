#include<bits/stdc++.h>
using namespace std;

int sub(input,output)
	{
		if(input.empty())
			{
				return 1;
			}
			
			string substr=input.substring(1);
			int smallopsize=sub(substr,oputput);
			for(int i=0;i<smallopsize;i++)
			{
				output[i+smallopsize]=input[0]+output[i];
			}
	}retun 2*smallopsize;
	
}

int main()
	{
		string input;
		int *output=new int[1000];
		int count=sub(input,output)
		for(int i=0;i<count;i++)
			{
				cout<<output[i]<<endl;
			}
		
	}
