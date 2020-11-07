#include<iostream>
using namespace std;

void increment(int& n)
{
	n-- ;
}

int main()
{
	int i=10;
	int& j=i;
	increment(i);
	cout<<i<<endl;
	i++;
	cout<<j<<endl;
	j++;
	cout<<i<<endl;
	
	int k=j;
	cout<<k;
}
