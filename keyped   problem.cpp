#include<bits/stdc++.h>
using namespace std;

int keypad(int num,string output[],string dialer[])
{
	if(num==0)
	{
		output[0]=" ";
		return 1;
	}
	int lastdigit=num%10;
	int smallinput=num/10;
	string smalloutput[10000];
	
	int smalloutputsize=keypad(smallinput,smalloutput,dialer);
	string op=dialer[lastdigit];
	int k=0;
	for(int i=0;i<op.size();i++)
	{
		for(int j=0;j<smalloutputsize;j++)
			{
				output[k++]=smalloutput[j]+op[i];
			}
	}
	return k;

}



int keypad(int num,string output[])
{
	string dialer[]={"",",","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	
	return keypad(num,output,dialer);
	
}	

int main()
{
	int num;
	cin>>num;
	string * output=new string[1000];
	int count =keypad(num,output);
	
	for(int i=0;i<count&&i<1000;i++)
	{
		cout<<output[i]<<endl;
	}
	
	return 0;
}
