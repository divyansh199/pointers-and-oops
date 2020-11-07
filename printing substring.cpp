#include<bits/stdc++.h>
using namespace std;


void print_subs(int num ,string output,string diler)
{
	if(diler.length()==0)
	{
		cout<<output<<endl;
		return;
	}
	print_subs(num,output,diler.substr(1));
	print_subs(num,output+diler[num],diler.substr(1));
}

int keypad(int num,string output)
{
	string diler[]={" ",",","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	return(num,output,diler);	
	
}

int main()
{
	int num;
	cin>>num;
	
	string output=" ";
	print_subs(num,output);
}
