#include<iostream>
using namespace std;

int main()
	{
		int i;
	
		
		i=10;
		int*p = &i;
		cout<<i<<endl;
		cout<<*p<<endl;
		
		i++;
		cout<<i<<endl;
		cout<<*p<<endl;
		
		int a=*p;
		a++;
		cout<<a<<endl;
		cout<<*p<<endl;
	}
